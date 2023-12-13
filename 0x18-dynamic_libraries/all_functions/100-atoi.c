#include "main.h"

/**
 * _atoi - cnvert a str
 * @s: the str to use
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int ress = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		ress = (ress * 10) + (s[i] - '0');
		i++;
	}
	ress *= sign;
	return (ress);
}
