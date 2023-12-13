#include "main.h"

/**
 * _isalpha - chec for alphabec
 * @c: char to check
 * Return: 1 if success 0 if fail
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'));
}
