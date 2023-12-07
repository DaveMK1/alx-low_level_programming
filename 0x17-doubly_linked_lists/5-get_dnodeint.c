#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node from a doubly linked list
 *
 * @h: head of the list
 * @index: index to find in the doubly linked list
 * Return: specific node of the doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	unsigned int a;

	if (h == NULL)
		return (NULL);

	while (h->prev != NULL)
		h = h->prev;

	a = 0;

	while (h != NULL)
	{
		if (a == index)
			break;
		h = h->next;
		a++;
	}

	return (h);
}
