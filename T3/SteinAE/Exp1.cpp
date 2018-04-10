#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <array>
#include <chrono>

void insertionSort(std::array<int, 10000>& arr)
{
	int key, j;
	for (int i = 1; i < 10000; i++) {
		key = arr[i];
		j = i - 1;
		if (i % 1000 == 0) std::cout << i << "\n";
		while ((j >= 0) && (key < arr[j])) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	const int N = 10000;
	std::array<int, N> arr;
	for (int i = 0; i < N; i++) arr[i] = rand();
	auto start = std::chrono::high_resolution_clock::now();
	insertionSort(arr);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Array is sorted in:\n";
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
	system("pause");
	return 0;
}