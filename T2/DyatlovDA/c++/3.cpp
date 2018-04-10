// C использованием контейнера <Array>
#include "stdafx.h"
#include <iostream>
#include <array>
#include <vector>
using namespace std;
const int N = 10;
array <int, N> a{};
void func(std::array<int, N> &a)
{
	int x[N] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i : x) // исп range-based for
	{
		a[i] *= 2;
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
		"|*| **  *****  **    **    |*|Study work number 3                         |*|\n"
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