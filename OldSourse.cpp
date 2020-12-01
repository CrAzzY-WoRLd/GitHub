#include <iostream> 
#include <iomanip> 
#include "windows.h"


using namespace std;

int main()
{
	int f, i, c, x, k, sum = 0, j;

	// f = y

	cout << "Print x: ";
	cin >> x;

	cout << "Print y: ";
	cin >> f;

	float z, y, dbt = 1;

	for (i = 1, k = 1; i < 6, k < 6; i++, k++)
	{
		sum = sum + k + abs(14);
		dbt = dbt * pow(i, 2);
	}

	j = dbt;
	c = sum;

	y = tan(x) + 5 / c;
	z = cos(j) + 2 * sin(f) / pow(f, 2) + 5;


	cout << endl << "Y= " << y << endl << "Z= " << z << endl;

}
