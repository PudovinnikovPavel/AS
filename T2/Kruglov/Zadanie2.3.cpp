
#include "stdafx.h"
#include<iostream>
#include<array>

int main() {
	std::array<int, 10> mas;
	int i = 0;
	std::cout << "arr ";
	for (auto &arr : mas) {
		arr = i;
		std::cout << arr << " ";
		i++;
	}
	std::cout << std::endl;
	std::cout << "new arr ";
	for (auto &arr : mas) {
		arr *= 2;
		std::cout << arr << std::endl;
	}
	std::cin >> i;
	return 0;
}