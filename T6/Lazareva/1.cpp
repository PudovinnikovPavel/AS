#include <iostream>
#include <stack>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

stack <int> st;
int main()
{
	int i=0, a=0, n, c=0, b;
	cout<<"¬ведите число:  ";
	cin >> n;
	a= pow(n,1/2);
	for(i=0; n>0; i++){
		c+=(n%2)*pow(10.0,i);
		st.push(c);
		n/=2;
	}
	for(b=0; b < a; b++){
		cout<<st.top();
		st.pop();
	}
	return 0;
}
