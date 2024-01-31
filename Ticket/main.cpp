#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	int num1, num2, num3, num4, num5, num6;
	cout << "Введите номер автобусного билета: " << endl;
	cin >> number;
	num6 = number % 10;
	num5 = number / 10 % 10;
	num4 = number / 100 % 10;
	num3 = number / 1000 % 10;
	num2 = number / 10000 % 10;
	num1 = number / 100000;
	if((num1 + num2 + num3) == (num4 + num5 + num6))
		cout << "У вас счастливый билет. Поздравляем!";
	else cout << "Побробуйте еще раз:(";

}