// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <array>
#include <iostream>
#include <cstdlib>

using namespace std;

void func1(int* arr) {
	for (size_t i = 0; i < 10; i++) {
		if (i % 2 == 0)
			arr[i] = arr[i] * 2;
		else
			arr[i]--;
		cout << arr[i] <<'\n';
	}
}

void func2(array<int, 10>& arr) {
	for (size_t i = 0; i < 10; i++) {
		if (i % 2 == 0)
			arr[i] = arr[i] * 2;
		else
			arr[i]--;
		cout << arr[i] << '\n';
	}
}

void func3(array<int, 10>& arr) {
	for (int& i : arr){
		i = i * 2;
		cout << i << '\n';
	}
}

int main()
{
	array<int, 10> arrA;
	int statA[10];
	int* dinA;
	dinA = new int[10];
	for (size_t i = 0; i < 10; i++) {
		cin >> arrA[i];
		statA[i] = arrA[i];
		dinA[i] = arrA[i];
	}
	cout << "New:\n";
	func1(dinA);
	cout << "Stat:\n";
	func1(statA);
	cout << "Array:\n";
	func2(arrA);
	cout << "Range based for\n";
	func3(arrA);
	system ("pause");
    return 0;
}

