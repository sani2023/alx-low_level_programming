#include "main.h"

/**
 * _strcpy - prgrm cpy the str
 * @dest: cpy to
 * @src: cpy frm
 * Return: str val
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int b = 0;

	while (*(src + b) != '\0')
	{
		d++;
	}
	for (; b < d; b++)
	{
		dest[b] = src[b];
	}
	dest[d] = '\0';
	return (dest);
}
