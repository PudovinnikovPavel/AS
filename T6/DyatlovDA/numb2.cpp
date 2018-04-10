#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	int sum = 0, num = 0;
	double n = 0;
	string str;
	stack <int> steck;
	stack <double> steck2;
	cout <<" *************************************************************************** \n"
    "|*| **  *****  **  ******  |*|--------------------------------------------|*|\n"
    "|*|     ** **      ******  |*|Nizhniy Novgorod Technical University.      |*|\n"
    "|*| **  *****  **    **    |*|Study work number 2                         |*|\n"
    "|*| **  ** *   **    **    |*|Performed student Dyatlov Daniil , 17-IVT-2.|*|\n"
    "|*| **  **  *  **    **    |*|--------------------------------------------|*|\n"
    " *************************************************************************** \n";
	getline(cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*')
		{
			while (str[i] != ' ' && i < str.size())
			{
				num = num * 10 + static_cast <int> (str[i]) - 48;
				i++;
				steck.push(num);
			}
			if (!steck.empty())
			{
				n = steck.top();
				steck2.push(n);
				num = 0;
				n = steck.size();
				for (int j = 0; j < n; j++)
				{
					steck.pop();
				}
			}
		}
		switch (str[i])
		{
			case '+': n = steck2.top(); steck2.pop(); n += steck2.top(); steck2.pop(); steck2.push(n); break;
			case '-': n = steck2.top(); steck2.pop(); n = steck2.top() - n; steck2.pop(); steck2.push(n); break;
			case '/': n = steck2.top(); steck2.pop(); n = steck2.top() / n; steck2.pop(); steck2.push(n); break;
			case '*': n = steck2.top(); steck2.pop(); n *= steck2.top(); steck2.pop(); steck2.push(n); break;
			default: break;
		}
	}
	cout << stek2.top();
	cin >> num;
	return 0;
}