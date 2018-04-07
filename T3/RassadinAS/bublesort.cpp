#include <stdio.h>
#include <iostream>
#include <chrono>

void swap(int *xp, int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}

void bSort(int arr[],int n)
{
	int i,j;
	for (i=0;i<n;i++) 
	{
		if (i%1000==0) std::cout<<i<<"\n";
		for (j=0;j<n;j++)
		{
			if (arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
		}
	}
}

int main()
{
	int N=50000;
	int arr[N]={};
	for (int i=0;i<N;i++) arr[i]=rand();
	auto start = std::chrono::high_resolution_clock::now();
	bSort(arr,N);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";
	//for (int i = 0; i < N; i++) std::cout << arr[i] << "\n";
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
    return 0;
}
