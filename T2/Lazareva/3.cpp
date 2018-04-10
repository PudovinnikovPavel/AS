#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int arr[10]={1, 13, 16, 17, 8, 3, 9, 12, 10, 52};
	for( int i : arr){
		i=i*2;
		cout<< i<<""<< endl;
	}
	return 0;
}
