#include "main.h"

/**
 * _strncat - concat 2 str
 * @dest: destination
 * @src: source
 * @n: vlaue
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int b;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[d] = src[b];
		d++;
		b++;
	}
	dest[d] = '\0';

	return (dest);
}
