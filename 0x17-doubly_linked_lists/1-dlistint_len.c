#include "lists.h"

/**
 * dlistint_len - fn return nbr of elemnt
 * @h: head of node
 * Return: nbr of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
