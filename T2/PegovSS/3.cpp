#include "stdafx.h"
#include <iostream>
using namespace std;
const int num = 10;

void func(int *Arr) {
	int i;
	for (i = 0; i < num; i++) {
		if ((Arr[i] % 2) == 0) Arr[i] = Arr[i] * 2;
		else Arr[i] = Arr[i] - 1;
		cout << Arr[i] << ' ';
	}
}

int main() {
	int arr[num]; int i;

	for (int i = 0; i < num; i++) {
		arr[i] = i;
		cout << arr[i] << ' ' << endl;
	}

	func(arr);

	cin >> i;
	return 0;
}