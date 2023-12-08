#include "lists.h"

/**
 * get_dnodeint_at_index - fn that return nth el
 * @head: head of node
 * @index: of the node
 * Return: NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;

	while (head != NULL && size < index)
	{
		head = head->next;
		size++;
	}

	return (head);
}
