#include "stdafx.h"
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <functional>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/date_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "A.h"
#include "iFileHandler.h"
using namespace std;

template<typename T>
void csodakiir(T t)
{
	cout << t << endl;
}


int main()
{
	A f(1, "asd");
	iFileHandler file("testt.txt");

	while (!file.isEndOfFile())
	{
		cout << file.readLine() << endl;
	}

	int a = 7;
	string b = "0";
	try
	{
		a = boost::lexical_cast<int>(b);
		cout << a << endl;
	}
	catch (const boost::bad_lexical_cast&)
	{
		cout << "bad cast" << endl;
	}	
	string text ("Hello, sok vesszo   alma korte");
	vector<string> list;
	boost::split(list, text, boost::is_any_of(" "), boost::token_compress_on);
	for (auto a : list)
	{
		cout << a << endl;
	}

	boost::gregorian::date d(2002, 2, 1);
	boost::gregorian::date d2(2001, 3, 11);
	boost::gregorian::date_duration dd = d2 - d;	

	boost::lexical_cast<string>(dd);
	cout << dd <<endl;

	boost::posix_time::ptime t1(d,boost::posix_time::hours(5) + boost::posix_time::minutes(4));
	boost::posix_time::ptime t2(d2, boost::posix_time::hours(5) + boost::posix_time::minutes(14));
	boost::posix_time::time_duration td = t2 - t1;

	boost::lexical_cast<string>(td);
	cout << td;
	
	return 0;
}

