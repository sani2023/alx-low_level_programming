#include "main.h"

/**
 * _memset - for blicking mem eith spec val
 * @s: tring add
 * @b: the value
 * @n: nbr of bytes to change
 * Return: chndg ar with nw val
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}

	return (s);
}
