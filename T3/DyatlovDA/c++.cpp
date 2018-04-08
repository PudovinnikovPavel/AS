#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void sort_puzirk(int *a, int t)
{
	for (int i = 1; i < t; ++i)
	{
		for (int j = 0; j < t - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void test_time(int t)
{
	int *arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		arr[i] = rand();
	}

	time_t t1 = time(0);
	sort_puzirk(arr, t);
	time_t t2 = time(0);
	cout << "sec = " << t2 - t1;
}

int main()
{
	int n;
	cout << " *************************************************************************** \n"
		"|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
		"|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
		"|*| **  *****  **    **    |*|Study work number 1                         |*|\n"
		"|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
		"|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
		" *************************************************************************** \n";
	cin >> n;
	test_time(n);
}