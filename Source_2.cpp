#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;

	cout << "������ ������ (1-5): ";
	cin >> k;

	switch (k)
	{
	case 1: cout << "����"; break;
	case 2: cout << "���"; break;
	case 3: cout << "���"; break;
	case 4: cout << "������"; break;
	case 5: cout << "�'���"; break;
	}
}
