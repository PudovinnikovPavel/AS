// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include <array> 
using namespace std;

void function(int *a, int m);

int main()
{
	int i, n;
	std::cout << "Enter the size of the array"; 
		std::cin >> n;
	int *arr = new int[n];
	for (i = 0; i <= n; i++) {
		arr[i] = i;
	}
	for (i = 0; i <= n; i++) {
		std::cout << arr[i];
		std::cout << std::endl;
	}
	function(arr, n);
	for (i = 0; i <= n; i++) {
		std::cout << arr[i];
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}
void function(int *a, int m) {
	for (int j = 0; j <= m; j++) {
		if (j % 2 == 0) {
			a[j] = a[j] * 2;
		}
		if (j % 2 == 1) {
			a[j] = a[j] - 1;
		}
	}
}