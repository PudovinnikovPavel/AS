
#include "stdafx.h"
#include <iostream>
#include <array>


using namespace std;

const int a = 10;
array <int, a> mas{};

void func1() { //array
	int i;
	for (i = 0; i < a; i++) {
		if ((mas[i] % 2) == 0) mas[i] = mas[i] * 2;
		else mas[i] = mas[i] - 1;
		cout << mas[i] << endl;
	}
}

void func2(int *Arr) { //static
	int i;
	for (i = 0; i < a; i++) {
		if ((Arr[i] % 2) == 0) Arr[i] = Arr[i] * 2;
		else Arr[i] = Arr[i] - 1;
		cout << Arr[i] << ' ';
	}
}

void func3(int *Arr) { //dinamish
	int i;
	for (i = 0; i < a; i++) {
		if ((Arr[i] % 2) == 0) Arr[i] = Arr[i] * 2;
		else Arr[i] = Arr[i] - 1;
		cout << Arr[i] << ' ';
	}


	int main() {
		int i;
		for (i = 0; i < a; i++) {
			mas[i] = i;
			cout << mas[i] << ' ' << endl;
		}

		func1();
		func2(mas);
		func3(mas);

		cin >> i;
		return 0;
	}
