// ConsoleApplication16.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[10] = {1,3,4,7,8,11,23,25,32,39};
	
		for (int x : a)
		{
			x *= 2;
			cout << x << endl;
		}
		system("pause");
	return 0;
}