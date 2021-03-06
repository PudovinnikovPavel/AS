// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>

int main()
{
	int a = 0, n = 0, i = 0, x = 0, y = 0, res = 0;
	std::string s;
	std::stack<int> st;
	std::cout << "\nEnter string\n";
	std::getline(std::cin, s);
	for (i = 0; i < s.size(); i++) {
		if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/' && s[i] != ' ') {
			while (s[i] != ' ' && i < s.size()) {
				a = a * 10 + static_cast<int> (s[i]) - static_cast<int>('0');
				i++;
			}
			st.push(a);
			a = 0;
		}
		switch (s[i]) {
		case '+':
			y = st.top();
			st.pop();
			x = st.top();
			st.pop();
			res = int(x + y);
			st.push(res);
			break;
		case '-':
			y = st.top();
			st.pop();
			x = st.top();
			st.pop();
			res = int(x - y);
			st.push(res);
			break;
		case '*':
			y = st.top();
			st.pop();
			x = st.top();
			st.pop();
			res = int(x * y);
			st.push(res);
			break;
		case '/':
			y = st.top();
			st.pop();
			x = st.top();
			st.pop();
			res = int(x / y);
			st.push(res);
			break;
		default: break;
		}
	}
	std::cout << st.top() << '\n';
	system("pause");
	return 0;
}