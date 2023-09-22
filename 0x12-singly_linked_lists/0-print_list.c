#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		a++;
		h = h->next;
	}
	return (a);
}
