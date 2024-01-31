#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FAKTORIAL
//#define STEPEN
#define ASCI_KOD

void main()
{
setlocale(LC_ALL, "Russian");

#ifdef FAKTORIAL
	int n; //„исло дл€ вычеслени€ факториала
	int i = 1;
	double f = 1;
	cout << "¬ведите число дл€ вычислени€ факториала: "; cin >> n;
	while (i <= n)
	{
		cout << i << " ! = ";
		f *= i++;
		cout << f << "\n";
	}
	#endif //FAKTORIAL
#ifdef STEPEN
	int a;
	int n;
	int N = 1;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведитепо казатель степени: "; cin >> n;
	if (n < 0);
	{
		a = 1 / 0;
		n = -n;
	}
	int i = 0;
	while (i++ < n)N *= a;
	cout << N << endl;

#endif //STEPEN

#ifdef ASCI_KOD
	int i = 0;
	int n = 256;
	while (i < n)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i++ << " ";
	}
#endif // ASCI_KOD

}
