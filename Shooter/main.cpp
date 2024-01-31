#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char key;
	key= _getch();
	if (key == 119) cout << "Вперед!"; 
	if (key == 115) cout << "Назад!";
	if (key == 97) cout << "Направо!";
    if (key == 160) cout << "Налево!"; 
	if (key == 32) cout << "Прыжок!";
	if (key == 13) cout << "Огонь!";
	if (key == 27) cout << "ВЫХОД";
}