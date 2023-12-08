#include "lists.h"

/**
 * free_dlistint - frres alist
 * @head: head of nod
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
