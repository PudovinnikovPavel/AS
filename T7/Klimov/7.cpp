#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
 int i,x;
 queue<int>q1;
 queue<int>q2;
    vector<int>numb={11,22,33,44,55,66,77,88,99,100};
 for(i=1; i<=10; i++){
   if(numb[i]%2==0){
     q1.push(i);
   }
   else{
     q2.push(i);
   }
}
cout<<"Первый и последний элементы очереди с четными цифрами: ";
cout<<q2.front()<<"\n";
cout<<q2.back()<<"\n\n";
cout<<"Первый и последний элементы очереди с нечетными цифр ми: ";
cout<<q1.front()<<"\n";
cout<<q1.back()<<"\n";
return 0;
} 