

#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>


int main(void)
{
	char str[1024], *ptr;
	int l, i, j;

	printf("Vvedite stroku ");
	gets_s(str);
	l = strlen(str);
	if (l == 0)
	{
		printf("Vi vveli pustuyu stroku\n");
		return 0;
	}

	ptr = (char *)malloc(l);

	i = l - 1;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\n'))
	{
		str[i--] = 0;
	}
	if (i < 0)
	{
		printf("V stroke odni probeli\n");
		return 0;
	}
	i = 0;
	while (str[i] == ' ' || str[i] == '\n') i++;
	printf("Rez %s\n", str);


	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			ptr[j++] = '*';
			while (str[i] && str[i] == ' ') i++;
		}
		ptr[j++] = str[i++];
	}

	printf("Rez %s\n", ptr);

	return 0;
}