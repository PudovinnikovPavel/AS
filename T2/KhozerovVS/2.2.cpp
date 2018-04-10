#include "stdafx.h"
#include <iostream>
#include <array>
void func(int *a, int m);

int main()
{

int a;
int b;
std::cout « "Enter razmer massiva";
std::cin » b;
int *arr1 = new int[b];
for (a = 0; a <= b; a++) {
arr1[a] = a;
}
for (a = 0; a <= b; a++) {
std::cout « arr1[a];
std::cout « std::endl;
}
func(arr1, b);
for (a = 0; a <= b; a++) {
std::cout « arr1[a];
std::cout « std::endl;
}

return 0;

}


void func(int *a, int m) {
for (int j = 0; j<m; j++) {
if (j % 2 == 0) {
a[j] = a[j] * 2;
}
if (j % 2 == 1) {
a[j] = a[j] - 1;
}
}
}
