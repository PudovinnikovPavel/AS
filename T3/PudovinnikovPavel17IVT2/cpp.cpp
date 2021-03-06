// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdlib>
void mysort(int* arr, int n) {
	int sw = 0, j = 0;
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		j = i - 1;
		while (j >= 0 && key < arr[j]) {
			sw = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
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
	mysort(arr, n);
	for (i = 0; i < n; i++) {
		std::cout << arr[i] << "\n";
	}
	auto et = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> t = et - st;
	std::cout << t.count() << "\n";
	system("pause");
    return 0;
}

