#include<queue>
#include<iostream>
#include<vector>

int main() {
	setlocale(LC_ALL, "Russian");
	std::queue <int> q, q1;
	int a;
	for (int i = 0; i < 10; i++) {
		std::cin >> a;
		if (a % 2 == 0) {
			q.push(a);
		}
		if (a % 2 == 1) {
			q1.push(a);
		}
	}
	std::cout << "Первый и последний элементы четной очереди:" << q.front() << " " << q.back() << std::endl;
	std::cout << "Первый и последний элементы нечетной очереди:" << q1.front() << " " << q1.back() << std::endl;
	std::cin >> a;
	return 0;
} 
