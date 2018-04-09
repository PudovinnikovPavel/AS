#include "StdAfx.h"
#include <stack> 
#include <iostream> 
using namespace std;
int main(){
	stack<int>st;
	int x;
	int y=0;
	cin>>x;
	while(x>=2){
		y=x/2;
		st.push(x%2);
		x=y;
	}
	cout<<"1";
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
	system("pause");
    return 0;
}

