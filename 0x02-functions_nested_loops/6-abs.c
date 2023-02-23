#include "main.h"
#include <stdio.h>
/**
 * _abs - function that compute an abs value
 *
 * @a: parameter to be checked
 *
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
