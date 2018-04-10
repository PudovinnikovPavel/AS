#include "stdafx.h"
#include<iostream>
#include<chrono>
#include<vector>

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	int n;
	cout << "Vvedite razmer massiva "<<endl;
	cin >> n;
	auto start = chrono::high_resolution_clock::now();
	vector <vector<int>> a;
	a.resize(n, vector<int>(0));
	int* qq = new int[n];
	for (int i = 0; i < n; i++) {
		qq[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		a[qq[i] % 10].push_back(qq[i]);
	}
	/////////////////////////////////////////////////////////////////////////////////////
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0, size = a[i].size(); j < size; j++) {
			qq[k] = a[i][j];
			k++;
		}
	}
	a.clear();
	a.resize(n, vector<int>(0));
	for (int i = 0; i < n; i++) {
		a[qq[i] / 10].push_back(qq[i]);
	}
	k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0, size = a[i].size(); j < size; j++) {
			qq[k] = a[i][j];
			k++;
		}
	}
	////////////////////////////////////////////////////////////////////////////////////
	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << elapsed.count();
	cin >> n;
	return 0;
}