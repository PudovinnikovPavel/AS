#include "stdfax"
#include <iostream>
#include <array>

using namespace std

int main() {
	array <int, 10> arr;
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}

	for (auto it = arr.begin():arr.end()) {
		arr.it *= 2;
	}

	for (auto it = arr.begin() : arr.end()) {
		cout<<arr.it<<" ";
	}

}