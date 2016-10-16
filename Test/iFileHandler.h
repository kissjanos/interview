#pragma once
#include <string>
#include <fstream>

using namespace std;

class iFileHandler
{
public:
	iFileHandler(const string& name);
	~iFileHandler();
	string readLine();
	bool isEndOfFile();
	bool getError();
private:
	bool _error;
	ifstream _file;
};
