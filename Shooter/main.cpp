#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char key;
	key= _getch();
	if (key == 119) cout << "������!"; 
	if (key == 115) cout << "�����!";
	if (key == 97) cout << "�������!";
    if (key == 160) cout << "������!"; 
	if (key == 32) cout << "������!";
	if (key == 13) cout << "�����!";
	if (key == 27) cout << "�����";
}