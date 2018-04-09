#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack <int> steck;
	int k, n;
	n = 0;
	cout <<" *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 1                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n";
	cin >> k;
	while (k > 0){
		steck.push(k % 2);
		k /= 2;
	}
	n = steck.size();
	for (int i = 0; i < n; i++)
	 {
		cout << steck.top();
		steck.pop();
	}
	cin >> k;
	return 0;
}

