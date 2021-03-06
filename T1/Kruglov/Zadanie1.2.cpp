

#include "stdafx.h"
#include <stdio.h>


void Prok(double *list, int size);
void print(double *list, int size);


int main(void)
{
	double list1[] = { 2123.0,1435.46,1.933,234234.44332,46.1,1.0,523.31 };
	int size1 = sizeof(list1) / sizeof(double);

	double list2[] = { 1.324,232,343,454,34,65,234,65,53 };
	int size2 = sizeof(list2) / sizeof(double);

	double list3[] = { 1,2,3,4,5,6,7,8,9 };
	int size3 = sizeof(list3) / sizeof(double);

	printf("Ish spis 1\n");
	print(list1, size1);
	Prok(list1, size1);
	printf("Rez\n");
	print(list1, size1);

	printf("Ish spis 2\n");
	print(list2, size2);
	Prok(list2, size2);
	printf("Rez\n");
	print(list2, size2);

	printf("Ish spis 3\n");
	print(list3, size3);
	Prok(list3, size3);
	printf("Rez\n");
	print(list3, size3);

	return 0;
}

void Prok(double *list, int size)
{
	int i;
	double max;
	if (size <= 0) return;
	max = list[0];
	for (i = 1; i < size; i++)
	{
		if (list[i] > max) max = list[i];
	}

	if (max == 0)
	{
		printf("Maks chislo 0, spisok ne izmenen\n");
		return;
	}

	for (i = 0; i < size; i++)
	{
		list[i] /= max;
	}
}

void print(double *list, int size)
{
	int i;
	printf("List: [");
	for (i = 0; i < size; i++)
	{
		if (i != 0) printf(",");
		printf("%.2f", list[i]);
	}
	printf("]\n");
}
