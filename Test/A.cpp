#include "stdafx.h"
#include "A.h"
#include <iostream>

A::A(int id, const string& x) : _id(id), _x(x)
{
	cout << "Constructor" << endl;
}

A::A(const A& A)
{
	cout << "Copy Constructor" << endl;
	_id = A._id;
	_x = A._x;
}
A::~A()
{
	cout << "Destruktor" << endl;
}

ostream& operator<< (ostream& _os, const A& A)
{
	_os << "Ez vagyok: " << A._id << " " << A._x << endl;
	return _os;
}
bool operator > (const A& lhs, const A& rhs)
{
	return (lhs._id > rhs._id);
}
A& A::operator= (const A& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	cout << "Overload assignment" << endl;
	_x = rhs._x;
	_id = rhs._id;
	return *this;
}
A& A::operator+= (const A& rhs)
{
	cout << "Overload +" << endl;
	_x.append(rhs._x);
	return *this;
}
int A::getid()
{
	return _id;
}