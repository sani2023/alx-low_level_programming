#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n eleements of an array
 * @a: parameter
 * @n: parameter
 * Return: void
 */

voit print_array(int *a, int n)
{
	int j;
	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
