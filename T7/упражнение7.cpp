#include"stdafx.h"
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	queue <int> q, q1;
	int a;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		if (a % 2 == 0) {
			q.push(a);
		}
		if (a % 2 == 1) {
			q1.push(a);
		}
	}
	cout << "первый четный элемент: " << q.front() << endl << "последний четный элемент: " << q.back() << endl << "первый нечетный элемент: " << q1.front() << endl << "последний нечетный элемент: " << q1.back();
	cin >> a;
}
