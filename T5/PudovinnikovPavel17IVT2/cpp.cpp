// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
void radsort(std::vector<int>& arr) {
	bool flag = false;
	int ptr = 1, k = 0;
	while (!flag){
		std::vector<int> buc[20];
		for (size_t i = 0; i < arr.size(); i++) {
			k = arr[i] / ptr;
			buc[k / 20].push_back(arr[i]);
			if (k <= 0)
				flag = true;
		}
		int x = 0;
		for (int y = 0; y < 20; y++) {
			std::vector<int> buck = buc[y];
			for (i = 0; i < buck.size(); i++) {
				arr[x] = buck[i];
				x++;
			}
		}
		ptr *= 20;
	}
	return;
}

int main()
{
	int n, i;
	std::vector<int> arr;
	std::cout << "\nEnter array size\n";
	std::cin >> n;
	for (i = 0; i < n; i++) {
		arr.push_back(rand() % 1000);
	}
	radixSort(arr);
	for (i = 0; i < n; i++) {
		std::cout << arr[i] << '\n';
	}
	system("pause");
    return 0;
}
//10^3 - 0.483041
