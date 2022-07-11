#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array valuea
 * @a: array to be printed out
 * @n: number of array elements
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}

		printf("%d\n", a[n - 1]);
	}

	printf("\n");
}
