#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: input char
 * Return: always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
			i++;
	}
	_putchar('\n');
}
