#include "lists.h"

/**
 * add_dnodeint_end - fn that add node at end
 * @head: head of node
 * @n: value holder
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new;
		new->prev = current;
	}
	return (new);
}
