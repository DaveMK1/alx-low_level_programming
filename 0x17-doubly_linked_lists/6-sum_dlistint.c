#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
  * @h: head of the list
  *
  * Return: The sum of all data
  */
int sum_dlistint(dlistint_t *h)
{
	dlistint_t *current = h;
	int sum = 0;

	if (h)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}

	return (sum);
}
