#include "lists.h"

/**
 * sum_dlistint - fn taht add the dlist
 * @head: head of the node
 * Return: if the list is empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
