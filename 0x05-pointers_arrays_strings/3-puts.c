#include "main.h"

/**
 * _puts - function that print a string
 * @str: parameter
 *
 * Return: always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{_putchar(*str);
	}
	_putchar('\n');
}
