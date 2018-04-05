#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

int main()
{
	std::stack <int> st;
	int a=33;
	int n = 0;
	int i;
	while (a != 0) {
		st.push(a % 2);
		a /= 2;
		n++;
	}
	for (i = 0; i < n; i++) {
			cout << st.top() << endl;;
			st.pop();
	}
	system("pause");
	return 0;
}
