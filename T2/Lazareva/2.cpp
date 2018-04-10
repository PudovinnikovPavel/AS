#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

template < typename T >
void func( const T *arr )
{
	int a;
	for( int i=0; i < 10; i++){
		if(arr[i]%2==1){
			cout<<arr[i]-1<<"\n";
		}
		else{
			cout<< arr[i]*2<<"\n";
		}
	}
}

int main() //Можно пробовать проделать функцию с любым из представлений массива в задании 1
{
	int arr[10]={2, 7, 8, 4, 3, 2, 7, 9, 17, 20};
	func(arr);
	return 0;
}
