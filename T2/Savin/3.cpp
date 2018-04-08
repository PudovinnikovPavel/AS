#include<iostream>
#include<array>

int main() {
	std::array<int, 10> masve;
	int k = 0;
	std::cout << "MASSIVE: ";
	for (auto &arr : masve) {
		arr = k;
		std::cout << arr << " ";
		k++;
	}
	std::cout << std::endl;
	std::cout << "NOVIY MASSIVE: ";
	for (auto &arr : masve) {
		arr *= 2;
		std::cout << arr << " ";
	}
	std::cin >> k;
	return 0;
}