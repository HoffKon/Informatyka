#include <iostream>
#include <string>
using namespace std;
#define WYRAZ 100
char a[WYRAZ];
void napis()
{
	cout << "Witaj w pragramie ktory wyswietla pierwsza i ostatnia litere danego wyrazu\n";
	cout << "Podaj jakis wyraz: ";
	cin >> a;
	cout << "Pierwsza litera twojego wyrazu: " << a[0] << "\n" << "Ostatnia litera twojego wyrazu: " << a[strlen(a) - 1] << endl;
}
int main()
{
	napis();
	system("Pause");
	return 0;
}
