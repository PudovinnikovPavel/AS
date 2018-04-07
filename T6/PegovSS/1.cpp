#include <iostream> 
#include <math.h> 
#include <stack> 
int main() 
{ 
unsigned int a; 
std::cin » a; 

std::stack<char> s; 
for(; a !=0;a/=2) 
{ 

if(a%2) 
s.push('1'); 
else 
s.push('0'); 

} 
while(!s.empty()) 
{ 
std::cout « s.top(); 
s.pop(); 
} 


return 0; 
}
