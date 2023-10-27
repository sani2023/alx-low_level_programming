#include "main.h"

/**
 * set_bit - set a bit at a given nbr to 1
 * @n: pointer to the nbr
 * @index: index of the bit ot set to 1
 *
 * Return: 1 if succeeded, -1 if fials
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
