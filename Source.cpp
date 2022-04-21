#include <iostream>
#include "Goods.h"

using namespace std;

int main()
{

	Goods d;
	Goods f(20, 3);
	Goods s(30, 2);

	d = f + s;
	cout << "f(20, 3) + s(30, 2)" << d << endl;

	d = f - s;
	cout << "f(20, 3) - s(30, 2)" << d << endl;

	d = f * s;
	cout << "f(20, 3) * s(30, 2)" << d << endl;

	d = f / s;
	cout << "f(20, 3) / s(30, 2)" << d << endl;

	d = f ^ s;
	cout << "f(20, 3) ^ s(30, 2)" << d << endl;

	cout << "f(20, 3)++" << f++ << endl;
	cout << "res = " << f << endl;
	cout << "++f(20, 3)" << ++f << endl;

	cout << "f(20, 3)--" << f-- << endl;
	cout << "res = " << f << endl;
	cout << "--f(20, 3)" << --f << endl;

	Goods t;
	int N;

	cout << "Enter arguments:" << endl;
	cin >> t;

	cout << "Êiëüêiñòü âiäïðàöüîâàíèõ äíiâ = "; cin >> N;

	cout << "summa = " << t.cost(N) << endl;;

	system("pause");
	return 0;
}