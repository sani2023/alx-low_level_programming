#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - print 1 if the  integer is a prinme number
 * @n: input
 * Return: 1 if is pri;e num otherwise 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - print 1 if the integer is a prime number
 * @n: input
 * @i: iteration
 * Return: 1 if is prime num otherwise 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
