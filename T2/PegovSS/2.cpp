#include <iostream>
#include <stdlib.h>
#include <array>


void Farr (std::array <int,10>& arr);
void Fptr (int *ptr);
void Fmas (int mas[10]);

int main(){
	std::array <int,10> arr= {1,2,3,4,5,6,7,8,9,10};
	int *ptr=new int[10];
	for (int i=0;i<10;i++) *(ptr+i)=i+1;
	int mas[10]={1,2,3,4,5,6,7,8,9,10};
	Farr(arr);
	Fptr(ptr);
	Fmas(mas);
	return 0;
}