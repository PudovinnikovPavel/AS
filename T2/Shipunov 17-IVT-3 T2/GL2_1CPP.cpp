// GL2_1CPP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>






int main()
{
	int arr[10] = { 64,38,44,78,120,39,11,34,45,69 };
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]%2==0)
		{
			arr[i] = arr[i] * 2;
		}
		else
		{
			arr[i]--;
		}
		std::cout << arr[i] << ' ';
	}
	getchar();
	getchar();
    return 0;
	
}

