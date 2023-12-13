#include "main.h"

/**
 * _isupper - function for upper letter
 * @c: char for cheking
 * Return: 0 unsuccess otherwise 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
