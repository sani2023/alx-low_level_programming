#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of characters
 * @c: parameter
 * @size: number of bytes
 * Return: a pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
