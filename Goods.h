#include <iostream>
#pragma once
using namespace std;

class Goods
{
private:
	float first;
	unsigned int second;
public:
	Goods();
	Goods(double, int);
	Goods(const Goods&);
	~Goods();

	double get_first() const { return first; };
	int get_second() const { return second; };
	void set_first(double first) { this->first = first; }
	void set_second(int second) { this->second = second; }

	Goods& operator = (const Goods&);
	operator string() const;
	friend Goods operator + (const Goods&, const Goods&);
	friend Goods operator - (const Goods&, const Goods&);
	friend Goods operator * (const Goods&, const Goods&);
	friend Goods operator / (const Goods&, const Goods&);
	friend Goods operator ^ (const Goods&, const Goods&);

	friend ostream& operator << (ostream&, const Goods&);
	friend istream& operator >> (istream&, Goods&);

	Goods& operator ++();
	Goods& operator --();
	Goods operator ++(int);
	Goods operator --(int);

	double cost(int s);

};
