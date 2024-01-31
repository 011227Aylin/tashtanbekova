#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number; //число введенное с клавиатуры
	int reverse = 0; //исходное число записанное в обратном порядке
	cout << "Введите число: "; cin >> number;
	int buffer = number;//копируем введенное число чтобы данные введенные полбзователем не удалились
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; 
			buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse==number)
	{
		cout << "Палиндром " << endl;
	}
	else
	{
		cout << "May be the next time " << endl;
	}

}