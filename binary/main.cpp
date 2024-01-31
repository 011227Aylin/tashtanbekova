#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIN");
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	a^= b;
	b ^= a;
	a^= b;
	cout << a << "\t" << b << endl;
}