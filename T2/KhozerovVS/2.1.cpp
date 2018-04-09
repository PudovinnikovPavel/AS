#include "stdafx.h"
#include <iostream>
#include <array>

int main()
{
//Создание массива с помощью array

int a;
std::array < int, 10 > arr;
for (a = 0; a <= 10; a++) {
arr[a] = a;
}
for (a = 0; a <= 10; a++) {
std::cout « arr[a];
std::cout « std::endl;
}


//Coздание массива с помощью оператора new

int b;
int c;
std::cin » c;
int *arr2 = new int(c);
for (b = 0; b <n; b++) {
arr2[b] = b + 1; //*arr2=j; arr2++;

}
arr2 = arr2 - c;
for (b = 0; b < c; b++) {
std::cout « *arr2;
arr2++;
}

//Coздание фиксированного массива
int g;
int arr3[10];
for (g = 0; g <= 10; g++) {
arr3[i] = i + 2;
}
for (g = 0; g <= 10; g++) {
std::cout « arr3[i];
std::cout « std::endl;
}

system "pause";
return 0;
}
