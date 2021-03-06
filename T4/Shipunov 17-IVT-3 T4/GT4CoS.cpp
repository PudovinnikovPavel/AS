// GT4CoS.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <chrono>

void CoS(std::vector<int>& arr, int n) {
	std::vector<int>::iterator max;
	max = std::max_element(arr.begin(), arr.end());
	int maxV = *max;
	int* count = new int[maxV + 1] ;
	int v;
	for (int i = 0; i < n; i++) {
		v = arr[i];
		count[v]++;
	}
	int k = 0;
	for (int i = 0; i < maxV + 1; i++) {
		for (int j = 0; j < count[i]; j++, k++) {
			arr[k] = i;
		}
	}
}




int main()
{
	int N = 1000000;
	std::vector<int> arr{};
	for (int i = 0; i<N; i++)
	{
		arr.push_back(rand());
	}
	auto start = std::chrono::high_resolution_clock::now();
	
	CoS(arr, N);
	
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";	
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
	getchar();
	getchar();
	return 0;
}

