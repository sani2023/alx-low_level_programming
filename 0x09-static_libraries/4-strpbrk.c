#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (S);
		}
		s++;
	}
	return ('\0');
}
