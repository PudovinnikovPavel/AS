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
}

void Farr (std::array<int,10>& arr) {
	std::cout<<"        array\n";
	std::cout<<"before          after\n";
	for (int i=0;i<10;i++) {
		std::cout<<arr[i]<<"        ";
		if (arr[i]%2==0) {arr[i]*=2;}
		else {arr[i]--;}
		std::cout<<arr[i]<<"\n";
	}
}

void Fptr (int *ptr) {
	std::cout<<"        *ptr\n";
	std::cout<<"before          after\n";
	for (int i=0;i<10;i++) {
		std::cout<<*(ptr+i)<<"        ";
		if (*(ptr+i)%2==0) *(ptr+i)*=2;
		else *(ptr+i)-=1;
		std::cout<<*(ptr+i)<<"\n";
	}
}
void Fmas (int arr[10]) {
	std::cout<<"   standart array\n";
	std::cout<<"before          after\n";
	for (int i=0;i<10;i++) {
		std::cout<<arr[i]<<"        ";
		if (arr[i]%2==0) arr[i]*=2;
		else arr[i]--;
		std::cout<<arr[i]<<"\n";
	}
}

 
