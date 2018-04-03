#include <iostream>
#include <stack>

using namespace std;

stack <int> val;

//using namespace std;

int main(){
	int a;
	cout << "Enter a:" << endl;
	cin >> a;
	while(a>=1){
		//a/=2;
		if(a%2==0) val.push(0);
		if(a%2==1) val.push(1);
		a/=2;
	}
	while(!val.empty()){
		cout << val.top();
		val.pop();
	}
	
	return 0;
}
