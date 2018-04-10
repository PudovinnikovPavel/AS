// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stack>

int main()
{
	std::stack <int> st;
	int a, n;
	n = 0;
	std::cin >> a;
	while (a!=0){
		st.push(a % 2);
		a /= 2;
		n++;

	}
	for (int i = 0; i < n-1; i++) {
		std::cout << st.top();
		st.pop();
	}
	system("pause");
	return 0;
}

