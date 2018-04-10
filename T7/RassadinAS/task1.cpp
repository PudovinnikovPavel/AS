#include <iostream>
#include <queue>

using namespace std;
int main() {
	int c;
	queue <int> a,b;
	for (int i=1;i<=10;i++){
		cin >> c;
		if (i%2==0) b.push(c);
		else a.push(c);
	}
	cout<<"---------------------------------"<<endl;
	cout<<"A : "<<a.front()<<"    "<<a.back()<<endl;
	cout<<"B : "<<b.front()<<"    "<<b.back()<<endl;
}
