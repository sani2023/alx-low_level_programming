#include "main.h"
/**
 * print_alphabet - function that print alphabet 10 times
 *
 * Return: always 0
 *
 */
void print_alphabet_x10(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		do {
			_putchar(i);
		}
	while (i <= 10);
}
