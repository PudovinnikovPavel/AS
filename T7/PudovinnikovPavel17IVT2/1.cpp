// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <queue>
#include<cstdio>
#include<iostream>


int main()
{
	int arr[16];
	std::queue<int> q1, q2;
	std::cout << "Enter elements\n";
	for (int i = 0; i < 16; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < 16; i++) {
		if (arr[i] % 2 == 0)
			q2.push(arr[i]);
		else
			q1.push(arr[i]);
	}
	std::cout << "Odd:\n" << q1.front() << ' ' << q1.back() << '\n';
	std::cout << "Even:\n" << q2.front() << ' ' << q2.back() << '\n';
	system("pause");
    return 0;
}

