// Upr2.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>


int main()
{
	std::array<int, 10> sanya;
	for (size_t i = 0; i < 10; i++) std::cin >> sanya[i];
	for (size_t i : sanya) {
		i *= 2;
		std::cout << i << "\n";
	}
	system("pause");
	return 0;
}