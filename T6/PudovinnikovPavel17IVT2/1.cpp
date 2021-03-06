// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stack>
#include <cstdlib>

int main()
{
	int a, n, i;
	std::stack<int> st;
	std::cout << "\nEnter integer\n";
	std::cin >> a;
	std::cout << "\nEnter radix\n";
	std::cin >> n;
	while (a != 0) {
		st.push(a % n);
		a = int(a / n);
	}
	while (!st.empty()) {
		std::cout << st.top();
		st.pop();
	}
	system("pause");
	return 0;
}