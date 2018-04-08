#include<iostream>
#include<chrono>

int main() {
	size_t z;
	std::cin >> z;
	auto start = std::chrono::high_resolution_clock::now();
	int *x = new int[z];
	for (int k = 0; k < z; k++) {
		x[k] = rand();
	}
	for (int k = 0; k < z; k++) {
		std::cout << x[k] << " ";
	}
	std::cout << std::endl;
	int max = x[0];
	for (int k = 0; k < z; k++) {
		if (x[k] > max) {
			max = x[k];
		}
	}
	int *y = new int[max];
	for (int k = 0; k < max; k++) {
		y[k] = 0;
	}
	for (int k = 0; k < z; k++) {
		y[x[k]]++;
	}
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count();
	std::cin >> z;
	return 0;
	
}