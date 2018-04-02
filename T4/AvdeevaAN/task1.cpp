#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>

using namespace std;

void bucketSort(float arr[], int n)
{
    vector<float> b[n];

    for(int i=0; i<n; i++)
    {
        int bi = n*arr[i];
        b[bi].push_back(arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        sort(b[i].begin(), b[i].end());
    }

    int index = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<b[i].size(); j++)
        {
            arr[index++]=b[i][j];
        }
    }
}

void test(int size)
{
    float *arr = new float[size];
    for(size_t i = 0; i < size; i++)
    {
        arr[i] = (float)rand() / (float)RAND_MAX;
    }

    time_t t1 = time(0);
    bucketSort(arr, size);
    time_t t2 = time(0);
    printf("Array size %d sorted in %d sec\n", size, t2-t1);
    delete[] arr;
}

int main()
{
    test(10);
}
