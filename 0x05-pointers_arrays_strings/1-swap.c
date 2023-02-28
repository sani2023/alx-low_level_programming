#include <stdio.h>

/**
 * swap_int - function that swap an integer
 * @a: parameter
 * @b: parameter
 *
 * Return: always 0
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
