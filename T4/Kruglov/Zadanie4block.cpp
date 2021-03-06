
#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <chrono>
using namespace std;

double fun();
void buckSort(int arr[], int n);
int X;
//0.02




int main()
{
	int N = 1000;
	int arr[1000] = {};
	for (int i = 0; i<N; i++) arr[i] = (int)fun() % 10000;
	for (int i = 0; i < N; i++) cout << arr[i] << "\n";
	auto start= chrono::high_resolution_clock::now();
	buckSort(arr, N);
	auto finish = chrono::high_resolution_clock::now();
	cout << "Sort arr\n";
	chrono::duration<double> elapsed = finish - start;
	cout << elapsed.count() << "\n";
	system("pause");
	return 0;
	
}

double fun() {
	const int m = 432434, a = 23417, c = 1000;
	int aX=0;
	aX = (a*aX + c) % m;
	return(aX);
}

void buckSort(int arr[], int n)
{
	vector <int> b[1000];
	for (int i = 0; i<n; i++)	b[arr[i] / 100].push_back(arr[i]);
	for (int i = 0; i<1000; i++)	sort(b[i].begin(), b[i].end());
	int index = 0;
	for (int i = 0; i<1000; i++)
	{
		for (int j = 0; j<b[i].size(); j++)	arr[index++] = b[i][j];
	}
}