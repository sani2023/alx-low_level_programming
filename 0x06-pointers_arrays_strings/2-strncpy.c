#include "main.h"

/**
 * _strncpy - function that concatenates copy a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
