#include <iostream>
#include <array>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

 int main()
 {
	array<int, 100> arr; //Для проверки нужно поменять количество элементов на 1000, 100000, 1000000
	int i = 0;
	for (i; i < 100; i++) {
            cout << "" << i + 1 << "" << " элемент : ";
            arr[i] = 0+rand()%100;
    }
	for(int a=1; a < 100; a++){    
		for(int b = a; b > 0 && arr[b-1] > arr[b];b--){
			swap(arr[b-1], arr[b]);
		}
	}
	for (int j = 0; j < 100; j++) {
		cout << j+1 <<""<< " Элемент : " << arr[j] << endl;
	}
	return 0;
 }
	
