#include<iostream>
#include<array>

void A1(std::array<int, 10>& a) {
	for (auto &arr : a) {
		if (arr % 2 == 0) {
			arr *= 2;
		}
		else {
			arr -= 1;
		}
	}
}
void A2(int* b) {
	for (size_t i = 0; i < 10; i++) {
		if (*b % 2 == 0) {
			*b *= 2;
			b++;
		}else {
			*b -= 1;
			b++;
		}
	}
}
int main() {
	std::array<int, 10> mas1;
	int* mas2;
	int mas3[10];
	mas2 = new int[10];
	size_t i = 0;
	std::cout << "mas1:" << " ";
	for (auto &arr : mas1) {
		arr = i;
		std::cout << arr << " ";
		i++;
	}
	std::cout << std::endl;
	std::cout << "mas2:" << " ";
	for (i = 0; i < 10; i++) {
		*mas2 = i;
		std::cout << *mas2 << " ";
		mas2++;
	}
	mas2 = mas2 - 10;
	std::cout << std::endl;
	std::cout << "mas3:" << " ";
	for (i = 0; i < 10; i++) {
		mas3[i] = i;
		std::cout << mas3[i] << " ";
	}
	std::cout << std::endl;
	A1(mas1);
	A2(mas2);
	A2(mas3);
	std::cout << "new mas1:" << " ";
	for (auto &arr : mas1) {
		std::cout << arr << " ";
	}
	std::cout << std::endl;
	std::cout << "new mas2:" << " ";
	for (i = 0; i < 10; i++) {
		std::cout << *mas2 << " ";
		mas2++;
	}
	mas2 = mas2 - 10;
	std::cout << std::endl;
	std::cout << "new mas3:" << " ";
	for (i = 0; i < 10; i++) {
		std::cout << mas3[i] << " ";
	}
	std::cout << std::endl;
	std::cin >> i;
	return 0;
}