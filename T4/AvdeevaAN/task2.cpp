#include<stdio.h>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

vector<int> countingSort(vector<int>& a, int max)
{
    vector<int> counts;
    counts.resize(max);

    for(auto& it : a)
    {
        counts[it]++;
    }

    for(int index = 1; index < max; index++)
    {
        counts[index] = counts[index-1] + counts[index];
    }

    vector<int> L;
    L.resize(a.size());

    for(auto& it : a)
    {
        int index = counts[it] - 1;
        L[index] = it;
        counts[it]--;
    }
    return L;
}


void test(int size)
{
    vector<int> arr;
    arr.resize(size);
    for(size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
    }

    time_t t1 = time(0);
    vector<int> b=countingSort(arr, size);
    time_t t2 = time(0);
    printf("Array size %d sorted in %d sec\n", size, t2-t1);
}

int main()
{
    test(100);
}
