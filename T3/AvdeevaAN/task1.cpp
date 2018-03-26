#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void sort(int *array, size_t size)
{
    for(size_t i = 1; i < size; ++i)
    {
        for(int j = 0; j < size-i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        if(i%1000==0) printf("Processed %d\n",i);
    }
}

void test(int size)
{
    int *arr = new int[size];
    for(size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
    }

    time_t t1 = time(0);
    sort(arr, size);
    time_t t2 = time(0);
    printf("Array size %d sorted in %d sec\n", size, t2-t1);
    delete[] arr;
}

int main()
{
    test(1000); //0 sec
    test(100000); // 30 sec
    test(1000000); // 3073 sec
}