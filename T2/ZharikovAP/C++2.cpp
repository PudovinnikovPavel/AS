void func(int* arr) {
	for (int i = 0; i<10; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] *= 2;
		}
		else {
			arr[i] -= 1;
		}
		std::cout << arr[i] << " ";

	}
	std::cout << std::endl;
	return;
}
void funcArr(std::array<int, 10>& arr) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] *= 2;
		}
		else {
			arr[i] -= 1;
		}
		std::cout << arr[i] << " ";

	}
	std::cout << std::endl;
}