#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define CALC
#define CALC_2
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
#ifdef TEMPERATURE
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << "Температура воздуха: " << temperature;
	if (temperature % 20 > 10 && temperature % 100 < 20) cout << " градусов\n";
	else if (temperature % 10 == 1) cout << " градус\n";
	else if (temperature % 10 >= 5 || temperature % 10 == 0) cout << " градусов \n";
	else cout << " градуса \n";
	if (temperature > 0)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature < 0)
	{
		cout << "Холодно" << endl;
	}
#endif TEMPERATURE
#ifdef CALC

	double a, b;
	char s;
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
#endif CALC

#ifdef CALC_2
	double a, b;
	char s;
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << " = " << a + b << endl; break;
	case '-':cout << a << "-" << b << " = " << a - b << endl; break;
	case '*':cout << a << "*" << b << " = " << a * b << endl; break;
	case '/':cout << a << "/" << b << " = " << a / b << endl; break;
	default:cout << "Error: no operation" << endl;
	}
#endif CALC_2
}
//конструкция множественного выбора switch