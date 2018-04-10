#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<vector>

using namespace std;

void radixSort(vector<int>& x)
{
    bool maxLength = false;
    int placement = 1;
    while(!maxLength)
    {
        maxLength = true;
        vector<vector<int>> buckets;
        buckets.resize(10);

        for(size_t k = 0; k < x.size(); k++)
        {
            int tmp = x[k] / placement;
            buckets[tmp % 10].push_back(x[k]);
            if(maxLength && tmp > 0) maxLength = false;
        }

        size_t idx = 0;
        for(size_t y = 0; y < 10; y++)
        {
            for(auto& it : buckets[y])
            {
                x[idx++] = it;
            }
        }
        placement *= 10;
    }
}

void test(size_t size)
{
    vector<int> x;
    x.resize(size);
    for(size_t k = 0; k < size; k++)
    {
        x[k] = rand() % size;
    }

    time_t t1 = time(0);
    radixSort(x);
    time_t t2 = time(0);
    printf("Array size %d sorted in %d sec\n", size, t2-t1);
}

int main()
{
    test(10000000); //0 sec
}