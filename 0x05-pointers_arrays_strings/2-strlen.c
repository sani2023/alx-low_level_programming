#include <stdio.h>

/**
 *  _strlen - function that return the length
 *
 * @str: parameter
 *
 * Return: always 0
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
			return (length);
}
