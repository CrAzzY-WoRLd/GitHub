#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;

	cout << "Введіть оцінку (1-5): ";
	cin >> k;

	switch (k)
	{
	case 1: cout << "Один"; break;
	case 2: cout << "Два"; break;
	case 3: cout << "Три"; break;
	case 4: cout << "Чотири"; break;
	case 5: cout << "П'ять"; break;
	}
}
