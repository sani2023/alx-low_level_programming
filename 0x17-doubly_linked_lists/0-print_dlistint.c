#include "lists.h"

/**
 * print_dlistint - fun prints the elements of a
 * @h: head
 * Return: nbr of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
