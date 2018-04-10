#include "stdafx.h" 
#include <iostream> 
#include <array> 

int main() 
{ 


int i; 
std::array < int, 10 > arr1; //массив с помощью array
for (i = 0; i <= 10; i++) { 
arr[i] = i; 
} 
for (i = 0; i <= 10; i++) { 
std::cout « arr[i]; 
std::cout « std::endl; 
} 

///////////////////////////////////////////////




int j; //массив с помощью оператора new
int n; 
std::cin » n; 
int *ar = new int(n); 
for (j = 0; j <n; j++) { 
ar[j] = j + 1; //*ar=j; ar++; 

} 
ar = ar - n; 
for (j = 0; j < n; j++) { 
std::cout « *ar; 
ar++; 
} 
//////////////////


int k; 
int fmas[10]; //фиксированный массив
for (k = 0; k <= 10; k++) { 
fmas[i] = i + 2; 
} 
for (k = 0; k <= 10; k++) { 
std::cout « fmas[i]; 
std::cout « std::endl; 
} 

system "pause"; 
return 0; 
}