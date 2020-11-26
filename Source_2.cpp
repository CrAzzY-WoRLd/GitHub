#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;

	cout << "Введіть оцінку (1-12): ";
	cin >> k;

	switch (k)
	{
	case 1: cout << "Один"; break;
	case 2: cout << "Два"; break;
	case 3: cout << "Три"; break;
	case 4: cout << "Чотири"; break;
	case 5: cout << "П'ять"; break;
	case 6: cout << "Шість"; break;
	case 7: cout << "Сім"; break;
	case 8: cout << "Вісім"; break;
	case 9: cout << "Дев'ять"; break;
	case 10: cout << "Десять"; break;
	case 11: cout << "Одинадцять"; break;
	case 12: cout << "Дванадцять"; break;
	}
}
