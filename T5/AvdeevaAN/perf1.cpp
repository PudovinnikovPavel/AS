#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<vector>

using namespace std;

void radixSort(vector<int>& a)
{
    bool maxLength = false;
    int placement = 1;
    while(!maxLength)
    {
        maxLength = true;
        vector<vector<int>> buckets;
        buckets.resize(10);

        for(size_t i = 0; i < a.size(); i++)
        {
            int tmp = a[i] / placement;
            buckets[tmp % 10].push_back(a[i]);
            if(maxLength && tmp > 0) maxLength = false;
        }

        size_t idx = 0;
        for(size_t b = 0; b < 10; b++)
        {
            for(auto& it : buckets[b])
            {
                a[idx++] = it;
            }
        }
        placement *= 10;
    }
}

void test(size_t size)
{
    vector<int> a;
    a.resize(size);
    for(size_t i = 0; i < size; i++)
    {
        a[i] = rand() % size;
    }

    time_t t1 = time(0);
    radixSort(a);
    time_t t2 = time(0);
    printf("Array size %d sorted in %d sec\n", size, t2-t1);
}

int main()
{
    test(10000000); //0 sec
}