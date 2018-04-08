#include <stdio.h>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arr;
    srand(time(0));
    for(size_t i = 0; i < 10; i++)
    {
        arr[i] = rand() % 1000;
    }

    printf("Source array is:\n");
    for(size_t i = 0; i < 10; i++)
    {
        printf("Array item arr[%zu]=%d\n", i, arr[i]);
    }

    for(auto& arrIt : arr)
    {
        arrIt *= 2;
    }

    printf("Processed array is:\n");
    for(size_t i = 0; i < 10; i++)
    {
        printf("Array item arr[%zu]=%d\n", i, arr[i]);
    }
    return 0;
}