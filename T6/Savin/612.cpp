#include <iostream>
#include <stack>
#include <string>

int main() {
	int sum = 0, num = 0;
	double x = 0;
	std::string s;
	std::stack <int> st;
	std::stack <double> st1;
	getline(std::cin, s);
	for (int k = 0; k < s.size(); k++) {
		if (s[k] != '+' && s[k] != '-' && s[k] != '/' && s[k] != '*') {
			while (s[k] != ' ' && k < s.size()) {
				num = num * 10 + static_cast <int> (s[k]) - 48;
				k++;
				st.push(num);
			}
			if (!st.empty()) {
				x = st.top();
				st1.push(x);
				num = 0;
				x = st.size();
				for (int g = 0; g < x; g++) {
					st.pop();
				}
			}
		}

		switch (s[k]) {
		case '+': x = st1.top(); st1.pop(); x += st1.top(); st1.pop(); st1.push(x); 
		break;
		
		case '-': x = st1.top(); st1.pop(); x = st1.top() - x; st1.pop(); st1.push(x); 
		break;
		
		case '/': x = st1.top(); st1.pop(); x = st1.top() / x; st1.pop(); st1.push(x);
		break;
		
		case '*': x = st1.top(); st1.pop(); x *= st1.top(); st1.pop(); st1.push(x); 
		break;
		
		default: 
		break;
		
		}

	}
	std::cout << st1.top();
	std::cin >> num;
	return 0;

}