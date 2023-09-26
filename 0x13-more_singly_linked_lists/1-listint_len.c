#include "lists.h"

/**
 * listint_len - counts elements in the list
 * @h: head of the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
