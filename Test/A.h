#pragma once
#include <string>

using namespace std;
class A
{
public:
	A(int id, const string& x);
	A(const A& A);
	~A();
	int getid();
//private:
	string _x;
	int _id;
	friend ostream& operator<< (ostream& _os, const A& A);
	friend bool operator > (const A& lhs, const A& rhs);
	A& operator+= (const A& rhs);
	A& operator= (const A& rhs);
};

