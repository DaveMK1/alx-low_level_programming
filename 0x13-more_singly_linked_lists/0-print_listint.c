#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
