#include<stdio.h>
#include<vector>
using namespace std;

void printVector(vector<int>& x)
{
    printf("Vector:[");
    for(auto it = x.begin(); it != x.end(); ++it)
    {
        if(it != x.begin()) printf(",");
        printf("%d", *it);
    }
    printf("]\n");
}

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


int main()
{
    vector<int> x = {999,382,1,0,34,8,287,123,555,1,32,987,456,100};
    printVector(x);
    radixSort(x);
    printVector(x);
    return 0;
}