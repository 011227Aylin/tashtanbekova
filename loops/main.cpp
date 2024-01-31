#include <iostream>
#include <conio.h>
using namespace std;


//#define WHILE_1
#define WHILE_2

void main()
{

	setlocale(LC_ALL, "RUSSIAN");
#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "Введите количество итераций: "; cin >> n;

	while (i < n)
	{
		cout << "Hello world!";
		cout << "Сам привет!";
		cout << ++i << endl;
		//i++;
	}
#endif WHILE_1

	char key;
	do
	{
		key = key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key!=27);

}

