#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
#include <queue>
using namespace std;
int main()
{
	int i;
	queue <int> ch, nch;
	vector <int> v (10);
	cout <<" *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 1                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n";
	for (i = 1; i <= 10; i++)
	{
		cin >> v[i - 1];
		if ((i % 2) == 1)
		{
			nch.push(v[i-1]);
		}
		if ((i % 2) == 0)
		{
			ch.push(v[i - 1]);
		}
	}
	cout << "nechetnay ochered:"<< nch.front() << " " << nch.back() << endl;
	cout << "chetnay ochered:"<<ch.front() << " " << ch.back() << endl;
	system("pause");
    return 0;
}
