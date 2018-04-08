#include <iostream>
#include <stack>
using namespace std;

void toBi(long int a){
	stack <long int> res;
	long int buff=a;

	while(buff>1){
		res.push(buff%2);
		buff=(int)buff/2;
	}
	res.push(buff);
	while(!res.empty()){
		cout<< res.top();
		res.pop();
	}
}


int main (){

	toBi(35779395);

}