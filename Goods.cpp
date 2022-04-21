#include "Goods.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Goods::Goods()
{
	first = 0;
	second = 0;
}

Goods::Goods(double first = 0, int second = 0)
{
	this->first = first;
	this->second = second;
}

Goods::Goods(const Goods& x)
{
	first = x.first;
	second = x.second;
}

Goods::~Goods()
{ }

Goods& Goods::operator =(const Goods& x)
{
	first = x.first;
	second = x.second;

	return *this;
}

Goods::operator string () const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;

	return ss.str();
}

Goods operator +(const Goods& x, const Goods& y)
{
	return Goods(x.first + y.first, x.second + y.second);
}

Goods operator -(const Goods& x, const Goods& y)
{
	return Goods(x.first - y.first, x.second - y.second);
}

Goods operator *(const Goods& x, const Goods& y)
{
	return Goods(x.first * y.first, x.second * y.second);
}

Goods operator /(const Goods& x, const Goods& y)
{
	return Goods(x.first / y.first, x.second / y.second);
}

Goods operator ^(const Goods& x, const Goods& y)
{
	return Goods(pow(x.first, y.first), pow(x.second, y.second));
}

ostream& operator << (ostream& out, const Goods& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Goods& x)
{
	cout << " First = "; in >> x.first;
	cout << " Second = "; in >> x.second;
	cout << endl;

	return in;
}

Goods& Goods::operator ++()
{
	first++;

	return *this;
}

Goods& Goods::operator --()
{
	first--;

	return *this;
}

Goods Goods::operator ++(int)
{
	Goods t(*this);
	second++;

	return t;
}

Goods Goods::operator --(int)
{
	Goods t(*this);
	second--;
	return t;
}

double Goods::cost(int s)
{
	return first * second;
}
