#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 *
 * @h: the head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *tmp;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	while ((tmp = h) != NULL)
	{
		h = h->next;
		free(tmp);
	}
}
