// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdlib>
void counting(int* arr, int n) {
	int i = 0;
	int max = arr[i];
	int min = arr[i];
	for (i; i < n; i++) {
		if a[i] > max
			max = arr[i];
		if a[i] < min
			min = arr[i];
	}
	int *b = new int[max + 1 - min];
	for (i = 0; i < max + 1 - min; i++) {
		b[i] = 0;
	}
	for (i = 0; i < n; i++) {
		b[arr[i] - min] = b[a[i] - min] + 1;
	}
	int i = 0
		for (int j = min; j < max + 1; j++) {
			while (b[j - min] != 0) {
				arr[i] = j;
				b[j - min]--;
				i++;
			}
	}
	return;
}

int main()
{
	int n, i;
	int *arr;
	std::cout << "\nEnter array size\n";
	std::cin >> n;
	auto st = std::chrono::high_resolution_clock::now();
	arr = new int[n];
	for (i = 0; i < n; i++) {
		arr[i] = rand();
	}
	counting(arr, n);
	for (i = 0; i < n; i++) {
		std::cout << arr[i] << "\n";
	}
	auto et = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> t = et - st;
	std::cout << t.count() << "\n";
	system("pause");
    return 0;
}
//10^3 - 0.483041
