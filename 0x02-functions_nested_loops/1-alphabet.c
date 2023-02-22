#include "main.h"
/**
 * print_alphabet -  function that print alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	for (char i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
