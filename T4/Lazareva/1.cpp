#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N, X, max, min;
	max = INT_MIN;
    min = INT_MAX;
    cout << "Ввеите количество элементов массива: ";
    cin >> N;
	int* arr1 = new int[N];
	for (int i=0; i < N; i++) {
        arr1[i] = 0+rand()%10;
        cout << "" << i + 1 << "" << " элемент : "<<arr1[i]<<"\n";
        if (arr1[i] > max)
            max = arr1[i];
        if (arr1[i] < min)
            min = arr1[i];
	}
    X = max - min + 1;
    int* arr2 = new int[X];
    for (int i = 0; i < X; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        arr2[arr1[i]-min]++;
    }
    int y = 0;
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < arr2[i]; j++)
       {
           arr1[y++] = i + min;
       }
    }
    cout << "Отсортированный массив : " << endl;
	for (int i=0; i < N; i++) {
        cout << "" << i + 1 << "" << " элемент : "<<arr1[i]<<"\n";
	}
    return 0;
}
