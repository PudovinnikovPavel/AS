#include<iostream>
#include<queue>
#include <vector>

using namespace std;

int main(){
	vector <int> a(10);
	queue <int> x;
	queue <int> y;
	int i, j=0;
	cout << "Enter array:\n";
	for(i=0;i<10;i++){
		cout << "a[" << i << "]=";
		cin >> j;
		a.push_back(j);
	//	cout << a.back();
	}
	for(i=0; i<10; i++){
		if(a.back()%2==0) x.push(a.back());
		else y.push(a.back());
		a.pop_back();
	}

	cout << "first of x=" << x.back() << " last of x=" << x.front() << endl;
	cout << "first of y=" << y.back() << " last of y=" << y.front();
	
	return 0;
}
