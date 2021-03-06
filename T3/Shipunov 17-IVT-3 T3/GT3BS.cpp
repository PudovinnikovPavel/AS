
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <windows.h>
#include <string>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bSort(int arr[], int n)
{
	int i, j;
	int per = n / 100;
	std::string s = "|";
	int count = 1;

	



	for (i = 0; i<n; i++)
	{
		if (i % per == 0) {
			system("cls");
			std::cout << count<<"% " <<s<< "\n";
			s = s + '|';
			count++;
		}
		for (j = 0; j<n; j++)
		{
			if (arr[j]>arr[j + 1]) swap(&arr[j], &arr[j + 1]);
		}
	}
}

int main()
{
	const int N = 50000;
	int arr[N] = {};
	for (int i = 0; i<N; i++) arr[i] = rand();
	auto start = std::chrono::high_resolution_clock::now();
	bSort(arr, N);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";
	//for (int i = 0; i < N; i++) std::cout << arr[i] << "\n";
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
	std::getchar();
	std::getchar();
	return 0;
	


}

