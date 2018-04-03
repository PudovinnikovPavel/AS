#include <stdio.h>


void processList(double *list, int size)
{
    int i;
    double max;
    if(size <= 0) return;
    max = list[0];
    for(i = 1; i < size; i++)
    {
        if(list[i] > max) max = list[i];
    }
    
    if(max == 0)
    {
        printf("Максимальное число равно 0, список оставлен без изменений\n");
        return;
    }

    for(i = 0; i < size; i++)
    {
        list[i] /= max;
    }
}

void printList(double *list, int size)
{
    int i;
    printf("List: [");
    for(i = 0; i < size; i++)
    {
        if(i != 0) printf(",");
        printf("%.2f", list[i]);
    }
    printf("]\n");
}

int main(void)
{
    double list1[]={23.0,145.4,1.98,23.432,456.1,9.0,10.34};
    int size1 = sizeof(list1)/sizeof(double);

    double list2[]={1,2,3,4,5,6,7,8,9};
    int size2 = sizeof(list2)/sizeof(double);

    double list3[]={9,8,7,6,5,4,3,2,1};
    int size3 = sizeof(list3)/sizeof(double);

    printf("Исходный список 1\n");
    printList(list1, size1);
    processList(list1, size1);
    printf("Результат\n");
    printList(list1, size1);

    printf("Исходный список 2\n");
    printList(list2, size2);
    processList(list2, size2);
    printf("Результат\n");
    printList(list2, size2);

    printf("Исходный список 3\n");
    printList(list3, size3);
    processList(list3, size3);
    printf("Результат\n");
    printList(list3, size3);
    
    return 0;
}
