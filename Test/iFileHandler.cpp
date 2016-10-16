#include "stdafx.h"
#include "iFileHandler.h"

iFileHandler::iFileHandler(const string& name) : _error(false)
{
	_file.open(name, ifstream::in);
	if (!_file.is_open())
		_error = true;
}
iFileHandler::~iFileHandler()
{
	_file.close();
}

string iFileHandler::readLine()
{
	string temp("");
	if (!_error && !isEndOfFile())
	{
		getline(_file, temp);
	}
	return temp;
}

bool iFileHandler::isEndOfFile()
{
	if (_error)
	{
		return true;
	}
	return _file.eof();
}

bool iFileHandler::getError()
{
	return _error;
}