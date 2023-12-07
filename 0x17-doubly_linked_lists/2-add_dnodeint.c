#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a doubly linked list
 *
 * @head: head of the list
 * @num: number to place in the new node
 * Return: new head of the doubly linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = num;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
