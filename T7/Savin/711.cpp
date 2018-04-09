#include <queue> 
#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
int k = 0; 
int g = 0; 
queue <int> q; 
queue <int> q1; 
vector<int> myVector(10); 
for (int k = 0; k <= 9; k++) { 
cout « "Введите элемент массива "; 
cin » myVector[k]; 
cout « endl; 
} 
for (int k = 0; k <= 9; k++) { 
if (myVector[k] % 2 == 0) { 
q.push(myVector[k]); 
} 
else { 
q1.push(myVector[k]); 
} 
} 
int x = q.size(); 
int y = q1.size(); 
cout « "Чётные числа: "; 
for (int k = 0; k < x; k++) { 
cout « q.front(); 
q.pop(); 
} 
cout « endl; 
cout « "Нечётные числа: "; 
for (int k = 0; k < y; k++) { 
cout « q1.front(); 
q1.pop(); 
} 
cout « endl; 
system ("pause"); 
return 0; 
}