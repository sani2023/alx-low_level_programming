#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i])
			i++;
	}
	_puchar('\n');
}
