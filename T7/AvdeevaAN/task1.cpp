#include<stdio.h>
#include<stdlib.h>
#include<queue>
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


int main()
{
    vector<int> numberSet;
    int size = 10;

    for(int i = 0; i < size; i++)
    {
        numberSet.push_back(rand() % 1000);
    }

    printVector(numberSet);

    queue<int> even, odd;
    for(int i = 0; i < size; i++)
    {
        // четное число
        if(((i+1) % 2) == 0)
        {
            even.push(numberSet[i]);
        }
        else // нечетное
        {
            odd.push(numberSet[i]);
        }
    }
    printf("Очередь с нечетными номерами: начало[%d] конец[%d]\n", odd.front(), odd.back());
    printf("Очередь с четными номерами: начало[%d] конец[%d]\n", even.front(), even.back());
}