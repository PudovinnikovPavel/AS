// C использованием контейнера <Array>
#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;
const int N = 10;
array <int, N> a{};
void func(std::array<int, N> &a) {
	int i;
	for (i = 0; i < N; i++)
	{
		if ((a[i] % 2) == 0)
			a[i] = a[i] * 2;
		else
			a[i] = a[i] - 1;
		cout << a[i] << ' ';
	}
	cout << endl;
}

int main()
{
	int i;
	cout << " *************************************************************************** \n"
		"|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
		"|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
		"|*| **  *****  **    **    |*|Study work number 2(1)                      |*|\n"
		"|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
		"|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
		" *************************************************************************** \n";
	cout << "enter the array:" << endl;
	for (i = 0; i < N; i++)
		cin >> a[i];
	cout << "amedded array:" << endl;
	func(a);
	system("pause");
	return 0;
}
