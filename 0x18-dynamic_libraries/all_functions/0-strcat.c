#include "main.h"

/**
 * _strcat - funct for concat 2 str
 * @dest: val entered
 * @src: val entered
 * Return: dest if succcessful
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int b;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[d] = src[b];
		d++;
		b++;
	}
	dest[d] = '\0';

	return (dest);
}
