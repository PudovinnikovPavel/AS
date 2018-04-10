#include <cstdlib>
#include <iostream>
#include <array>
#include <chrono>

void insertionSort(std::array<char, 50000>& arr)
{
	int key,j;
	for (int i = 1; i < 50000; i++) {
		key = arr[i];
		j = i - 1;
		if (i % 1000==0) std::cout << i << "\n";
		while ((j >= 0) && (key < arr[j])) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	const int N=50000;
	std::array<char, N> arr;
	for (int i = 0; i < N; i++) arr[i] = rand();
	auto start = std::chrono::high_resolution_clock::now();
	insertionSort(arr);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";
	//for (int i = 0; i < N; i++) std::cout << arr[i] << "\n";
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
    return 0;
}
