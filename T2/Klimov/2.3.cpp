
#include "stdafx.h"
#include <iostream>



int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << "массив:";
	for (int &i : arr) {
		std::cout << i << ", ";
	}
	std::cout << std::endl;

	for (int &i : arr)
	{
		i *= 2;
	}

	std::cout << "Полуенный массив:";
	for (int &i : arr) {
		std::cout << i << ", ";
	}

	std::cout << std::endl;
	system("pause");
	return 0;
}