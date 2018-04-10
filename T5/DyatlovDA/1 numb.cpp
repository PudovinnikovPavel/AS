#include "stdafx.h"
#include<iostream>
#include<vector>
#include<chrono>
#include <time.h>
using namespace std;
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
	time_t t1 = time(0);
	vector <vector<int>> a;
	a.resize(n, vector<int> (0));
	int* b = new int[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		a[b[i] % 10].push_back(b[i]);
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0, size = a[i].size(); j < size; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	}
	a.clear();
	a.resize(n, vector<int>(0));
	for (int i = 0; i < n; i++) 
	{
		a[b[i] / 10].push_back(b[i]);
	}
	k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0, size = a[i].size(); j < size; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	}
	time_t t2 = time(0);
	cout << t2-t1;
	cin >> n;
	return 0;
}