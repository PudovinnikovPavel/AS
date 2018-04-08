#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;

int main() 
{
//Описание массива с использованием контейнера array

	array<int, 10> arr;
	for (int i = 0; i < 10; i++) {
            cout << "" << i + 1 << "" << " элемент : ";
            cin >> arr[i];
    }

 // Описание массива с ипользованием оператора new
 
	int *arr = new int[n];
	cout<<"Введите количество элементов массива"; //для задания 10 элементов
	cin>> n;
	for (int i = 0; i < n; i++) {
            cout << "" << i + 1 << "" << " элемент : ";
            cin >> arr[i];
    }


// Описание массива с помощью фиксированных массивов

	int arr[10]={1, 56, 87, 9, 4, 45, 26, 21, 7, 10};
	for (int i = 0; i < 10; i++) {
            cout << "" << i + 1 << "" << " элемент : ";
            cout >> arr[i];
	}

	return 0;
}
