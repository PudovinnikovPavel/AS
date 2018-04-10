#include "StdAfx.h"
#include <queue>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	queue<int>q;
	queue<int>q1;
	vector<int>myVector(10);
	cout<<"Введите элементы массива:"<<endl;
	for(int i=0;i<10;i++){
		cin>>myVector[i];
	}
	for(int i=0;i<10;i++)
		if(myVector[i]%2==0)
			q.push(myVector[i]);
		else 
			q1.push(myVector[i]);
	int x=q.size();
	int y=q1.size();
	cout<<"Очередь четных:"<<endl;
	for(int i=0;i<x;i++){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	cout<<"Очередь нечетных:"<<endl;
	for(int i=0;i<y;i++){
		cout<<q1.front()<<" ";
		q1.pop();
	}
	cout<<endl;
	system("pause");
    return 0;
}

