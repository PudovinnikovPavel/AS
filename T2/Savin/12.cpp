#include<iostream>
#include<array>

void A1(std::array<int, 10>& x) {
	for (auto &arr : x) {
		if (arr % 2 == 0) {
			arr *= 2;
		}
		else {
			arr -= 1;
		}
	}
}
void A2(int* y) {
	for (size_t k = 0; k < 10; k++) {
		if (*y % 2 == 0) {
			*y *= 2;
			y++;
		}else {
			*y -= 1;
			y++;
		}
	}
}
int main() {
	std::array<int, 10> masve1;
	int* masve2;
	int masve3[10];
	mas2 = new int[10];
	size_t k = 0;
	std::cout << "MASSIVE1:" << " ";
	for (auto &arr : masve1) {
		arr = k;
		std::cout << arr << " ";
		k++;
	}
	std::cout << std::endl;
	std::cout << "MASSIVE2:" << " ";
	for (k = 0; k < 10; k++) {
		*masve2 = k;
		std::cout << *masve2 << " ";
		masve2++;
	}
	masve2 = masve2 - 10;
	std::cout << std::endl;
	std::cout << "MASSIVE3:" << " ";
	for (k = 0; k < 10; k++) {
		masve3[k] = k;
		std::cout << masve3[k] << " ";
	}
	std::cout << std::endl;
	A1(masve1);
	A2(masve2);
	A2(masve3);
	std::cout << "NIVIY MASSIVE1:" << " ";
	for (auto &arr : masve1) {
		std::cout << arr << " ";
	}
	std::cout << std::endl;
	std::cout << "NIVIY MASSIVE2:" << " ";
	for (k = 0; k < 10; k++) {
		std::cout << *masve2 << " ";
		masve2++;
	}
	masve2 = masve2 - 10;
	std::cout << std::endl;
	std::cout << "NIVIY MASSIVE3:" << " ";
	for (k = 0; k < 10; k++) {
		std::cout << masve3[k] << " ";
	}
	std::cout << std::endl;
	std::cin >> k;
	return 0;
}