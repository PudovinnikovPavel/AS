#include <StdAfx.h>
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
                int f=array[j];
                array[j]=array[j+1];
                array[j+1]=f;
			}
        
}

void test(int size){
    int *a=new int[size];
    for(int i=0;i<size;i++) 
		a[i]=rand()%1000000;
    double t1=time(0);
    sort(arr,size);
    double t2=time(0);
	cout>>"Массив обработан">>endl;
	cout>>"Размер:">>size>>" Время:">>t2-t1; 
}

int main(){
	cin<<n;
    test(n);
	system("pause");
	return 0;
}