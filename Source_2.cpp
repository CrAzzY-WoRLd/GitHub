#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;

	cout << "������ ������ (1-12): ";
	cin >> k;

	switch (k)
	{
	case 1: cout << "����"; break;
	case 2: cout << "���"; break;
	case 3: cout << "���"; break;
	case 4: cout << "������"; break;
	case 5: cout << "�'���"; break;
	case 6: cout << "س���"; break;
	case 7: cout << "ѳ�"; break;
	case 8: cout << "³��"; break;
	case 9: cout << "���'���"; break;
	case 10: cout << "������"; break;
	case 11: cout << "����������"; break;
	case 12: cout << "����������"; break;
	}
}
