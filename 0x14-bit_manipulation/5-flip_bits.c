#include "main.h"

/**
 * flip_bits - counts the nbr of bits to chang
 * @n: 1st nbr
 * @m: 2nd nbr
 *
 * Return: nbr of bit to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;

		if (current & 1)
			count++;
	}

	return (count);
}
