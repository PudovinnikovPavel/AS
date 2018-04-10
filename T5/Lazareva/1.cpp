#include <iostream>
#include <array>

using namespace std;

void sort(int arr[10],int arr2[10][10], int b)
{
    int num[10], i=0, j=0, k=0;
    for(i=0; i<10; i++)
        num[i]=0;
    for(i=0; i<10; i++)
    {
		while(b>1)
		{
        arr[i]/=10;
        b--;
		}
		int a;
		a=arr[i]%10;
        arr2[num[a]][a]=arr[i];
        num[a]++;
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<num[i]; j++)
        {
            arr[k]=arr2[j][i];
            k++;
        }
    }
}
 int main()
{
    
    int b, i;
    int arr[10];
	for (int c=0; c <10; c++) {
    arr[c] = 0+rand()%100;
	}
    int arr2[10][10];
    for(b=1; b<4; b++)
        sort(arr, arr2, b);
    for(i=0; i<10; i++)
        cout<<arr[i]<<endl;
    return 0;
}
