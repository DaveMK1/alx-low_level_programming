#include "lists.h"

/**
 * list_len - Shows the number of elements of a list
 * @h: linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
