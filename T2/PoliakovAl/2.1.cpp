// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;


int main()
{
	array<int, 10> mas;
	mas.fill(1);
	for (auto i = 0; i < 10; i++)
		cout << mas[i] << " ";
	cout << endl;

	float *mas2 = new float[10];
	for (int i = 0; i < 10; i++) {
		mas2[i] = 2;
		cout << mas2[i] << " ";
	}
	delete[] mas2;
	cout << endl;

	int a[10] = { 3,3,3,3,3,3,3,3,3,3 };
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";

	int n;
	cin >> n;
    return 0;
}

