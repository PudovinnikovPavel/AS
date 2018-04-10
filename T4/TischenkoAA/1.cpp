#include "StdAfx.h"
#include <iostream>
#include <array>
#include <time.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for (int i=0;i<n;i++) 
		arr[i]=rand();
	int max=arr[0];
	for (int i=0;i<n;i++) 
		if (max<arr[i])
			max=arr[i];
	int a;
	int* arr1=new int[max+1];
	for(int i=0;i<max+1;i++)
		arr1[i]=0;
	for (int i=0;i<n;i++) {
		a=arr[i];
		arr1[a]++;	
	}
	int q=0;
	for (int i=0;i<max+1;i++) 
		for (int j=0;j<arr1[i];j++){
			arr[q]=i;
			q++;
		}
	time_t time=clock()/CLOCKS_PER_SEC;
	cout <<time<<endl;
	system("pause");
    return 0;
}