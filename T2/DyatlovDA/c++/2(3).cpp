// C помощью фиксированных массивов
#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;
const int N = 10;
const int a[N] = { 1,2,3,4,5,6,7,8,9,10 };
void func(const int *a) {
	int i;
	for (i = 0; i < N; i++)
	{
		if ((a[i] % 2) == 0)
			cout << a[i] * 2 << ' ';
		else
			cout << a[i] - 1 << ' ';
	}
	cout << endl;
}

int main()
{
	int i;
	cout << " *************************************************************************** \n"
		"|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
		"|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
		"|*| **  *****  **    **    |*|Study work number 2(2)                      |*|\n"
		"|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
		"|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
		" *************************************************************************** \n";
	cout << "enter the array:" << endl;
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
	cout << "amedded array:" << endl;
	func(a);
	system("pause");
	return 0;
}