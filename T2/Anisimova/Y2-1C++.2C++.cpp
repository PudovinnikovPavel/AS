// Y2-1C++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>



int main()
{
	std::array <int, 10> mas1;
	int* mas2 = new int[10];
	int mas3[10];
	std::cout << "Massiv 1 :";
	for (std::size_t i = 0; i < 10; i++){
		std::cin >> mas1[i];
	}
	std::cout << "Massiv 2 :";
	for (std::size_t i = 0; i < 10; i++){
		std::cin >> mas2[i];
	}
	std::cout << "Massiv 3 :";
	for (std::size_t i = 0; i < 10; i++){
		std::cin >> mas3[i];
	}
	
	for (std::size_t i = 0; i < 10; i++){
		if (mas1[i] % 2 == 0){
			mas1[i] *= 2;
			std::cout << mas1[i] << std::endl;
		}
		else{
			mas1[i] -= 1;
			std::cout << mas1[i] << std::endl;
		}
	}
	for (std::size_t i = 0; i < 10; i++){
		if (mas2[i] % 2 == 0){
			mas2[i] *= 2;
			std::cout << mas2[i] << std::endl;
		}
		else{
			mas2[i] -= 1;
			std::cout << mas2[i] << std::endl;
		}
	}
	for (std::size_t i = 0; i < 10; i++){
		if (mas3[i] % 2 == 0){
			mas3[i] *= 2;
			std::cout << mas3[i] << std::endl;
		}
		else{
			mas3[i] -= 1;
			std::cout << mas3[i] << std::endl;
		}
	}
	std::cout << "Massiv 1 :";
	for (std::size_t i = 0; i<10; i++) {
		std::cout << mas1[i];
	}
	std::cout << "Massiv 2 :";
	for (std::size_t i = 0; i<10; i++) {
		std::cout << mas2[i];
	}
	std::cout << "Massiv 3 :";
	for (std::size_t i = 0; i<10; i++) {
		std::cout <<  mas3[i];
	}

	system("pause");

}