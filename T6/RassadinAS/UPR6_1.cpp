// UPR6.1.cpp: определяет точку входа для консольного приложения.
//

#include <stdlib.h>
#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include "str_switch.h"

using namespace std;

int main()
{
	int a,b,c;
	stringstream ss;
	string N = {};
	string temp = {};
	cout<<"enter string with \"space\""<<endl;
	getline(cin, N);
	ss << N<<" end";
	stack<int> stek;
	c=0;
	for (auto i=0u;i<N.size();i++){
		if (N[i]==' ') c++;
	}
	c++;
	for (int i = 0; i < c;i++) {
		ss>>temp;
		SWITCH(temp) {
			CASE("+"):{
				a=stek.top();
				stek.pop();
				b=stek.top();
				stek.pop();
				stek.push(a+b);
				break;
			}
			CASE("-"):{
				a=stek.top();
				stek.pop();
				b=stek.top();
				stek.pop();
				stek.push(b-a);
				break;
			}
			CASE("*"):{
				a=stek.top();
				stek.pop();
				b=stek.top();
				stek.pop();
				stek.push(a*b);
				break;
			}
			CASE("/"):{
				a=stek.top();
				stek.pop();
				b=stek.top();
				stek.pop();
				stek.push(b/a);
				break;
			}
			DEFAULT:{
				a=stoi(temp);
				stek.push(a);
			}
		}
	}
	ss.clear();
	cout<<stek.top();
	//system("pause");
    return 0;
}

