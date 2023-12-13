#include "main.h"

/**
 * _memcpy - fun that copy mem
 * @dest: memry where is stored
 * @src: form where to cpy
 * @n: nbr of bytes
 * Return: cpy mem with n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
