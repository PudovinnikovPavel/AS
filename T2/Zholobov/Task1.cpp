#include "stdafx.h"
#include <iostream>
using namespace std;
int num = 10;

void func(int *Arr) {
	int i;
	for (i = 0; i < num; i++) {
		if ((Arr[i] % 2) == 0) Arr[i] = Arr[i] * 2;
		else Arr[i] = Arr[i] - 1;
		cout << Arr[i] <<' ';
	}
}

int main() {
	int *p_arr = new int[num];

	for (int i = 0; i < num; i++) {
		p_arr[i] = i;
		cout << p_arr[i] << ' ' << endl;
	}

	func(p_arr);

	cin >> num;
    return 0;
}
