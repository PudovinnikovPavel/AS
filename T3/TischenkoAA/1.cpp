#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <array>


using namespace std;

void sort(int *a,int size){
    for(int i=1;i<=size;i++)
        for(int j=0;j<size-i;j++)
            if(a[j]>a[j+1]){
                int f=a[j];
                a[j]=a[j+1];
                a[j+1]=f;
			}
        
}

void test(int size){
    int *a=new int[size];
    for(int i=0;i<size;i++) 
		a[i]=rand()%1000000;
    double t1=time(0);
    sort(a,size);
    double t2=time(0);
	cout<<"Massive"<<endl;
	cout<<"Size:"<<size<<" Time:"<<t2-t1; 
}

int main(){
	int n;
	cin>>n;
    test(n);
	cout<<endl;
	system("pause");
	return 0;
}