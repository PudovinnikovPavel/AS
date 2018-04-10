#include <iostream>
#include <stack>

int main()
{
	std::stack <int> st;
	int x, y;
	y = 0;
	std::cin >> x;
	while (x > 0){
		st.push(x % 2);
		x /= 2;
	}
	y = st.size();
	for (int k = 0; k < y; k++) {
		std::cout << st.top();
		st.pop();
	}
	cin >> x;
	return 0;
}