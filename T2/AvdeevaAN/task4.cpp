#include<stdio.h>

int isSimple(int n)
{
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0 ) return false;
    return true;
}

int main()
{
    int d;
    printf("Введите число (0-1000): ");
    scanf("%d", &d);
    if(isSimple(d)) printf("Простое число\n");
    else printf("Не простое число\n");
    return 0;
}