#include <iostream> 
#include <queue> 
#include <ctime> 

using namespace std; 


int main() { 
srand(time(0)); 
queue <int> q; 
queue <int> chet, nechet; 
for (int i = 0; i<10; i++) { 
q.push(rand()); 
} 
for (int i = 0; i<10; i++) { 
if (q.front() % 2) 
nechet.push(q.front()); 

else 
chet.push(q.front()); 

q.pop(); 
} 
cout « "Первый четный элемент: " « chet.front() « endl 
« "Последний четный элемент: " « chet.back() « endl 
« "Первый нечетный элемент: " « nechet.front() « endl 
« "Последний нечетный элемент: " « nechet.back(); 

return 0; 
}