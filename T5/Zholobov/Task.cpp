#include<stdio.h>
#include<vector>
using namespace std;

void printVector(vector<int>& a)
{
    printf("Vector:[");
    for(auto it = a.begin(); it != a.end(); ++it)
    {
        if(it != a.begin()) printf(",");
        printf("%d", *it);
    }
    printf("]\n");
}

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


int main()
{
    vector<int> a = {999,382,1,0,34,8,287,123,555,1,32,987,456,100};
    printVector(a);
    radixSort(a);
    printVector(a);
    return 0;
}
