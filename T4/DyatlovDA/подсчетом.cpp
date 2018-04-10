#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <time.h>
using namespace std;
void counting(vector<int>& a, int n)
{
	vector<int>::iterator max;
	max = std::max_element(a.begin(), a.end());
	int max = *max;
	int count[max+1]={0};
	int c;a
	for (int i = 0; i < n; i++)
	{
		c = a[i];
		count[c]++;	
	}
	int k = 0;
	for (int i = 0; i < max+1; i++)
	{
		for (int j = 0; j < count[i]; j++,k++)
		{ 
			a[k] = i;
		}
	}
}
int LKG(int X)
{
	const int m=193723, a=7297, c=1000;
	X=(a*X+c)%m;
	return(X);
}
int main()
{
	int N=1000000, b=736;
	vector<int> a{};
	cout << " *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 2                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n";
	for (int i=0;i<N;i++) 
	{
		b=LKG(b)%1000;
		a.push_back(b);
	}
	time_t t1 = time(0);
	counting(a,N);
	time_t t2 = time(0);
	cout << "sort:\n";
	cout << t2-t1 << "\n";
    return 0;
}
