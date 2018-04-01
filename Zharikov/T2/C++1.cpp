#include <iostream>
#include <array>


int main() {
	std::array <int, 10> arr;
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	int* arrNew = new int[10];
	for (int i = 0; i < 10; i++) {
		arrNew[i] = i + 1;
	}

	int Arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

}