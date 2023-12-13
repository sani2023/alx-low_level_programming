#include "main.h"

/**
 * _strlen - returning the len of str
 * @s: str
 * Return: len
 */
int _strlen(char *s)
{
	int longd = 0;

	while (*s != '\0')
	{
		longd++;
		s++;
	}

	return (longd);
}
