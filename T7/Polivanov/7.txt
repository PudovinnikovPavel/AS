#include <queue>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	queue <int> q1;
	queue <int> q2;
	int a;
	for (int i = 1;i <= 10;i++) {
		cout << "\nEnter" <<i<< " el = \n";
		cin >> i;
		if (i % 2)
			q1.push(i);
		else q2.push(i);
	}
	cout << "First element of q1 = " << q1.front() << "\n";
	cout << "Last element of q1 = " << q1.back() << "\n";
	cout << "First element of q2 = " << q2.front() << "\n";
	cout << "Last element of q2 = " << q2.back() << "\n";
	getch();
}