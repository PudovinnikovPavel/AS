#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    int d;
    printf("Введите десятичное число: ");
    scanf("%d", &d);
    if(!d)
    {
        printf("Двоичное число: 0\n");
        return 0;
    }

    stack<char> s;
    while(d)
    {
        s.push('0' + (d % 2));
        d /= 2;
    }

    printf("Двоичное число: ");
    while(!s.empty())
    {
        printf("%c", s.top());
        s.pop();
    }
    printf("\n");
    return 0;
}