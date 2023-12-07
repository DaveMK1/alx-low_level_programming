#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end
  * of a dlistint_t list
  * @h: head of the list
  * @num: The number to place in the new node
  *
  * Return: address of the new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int num)
{
	dlistint_t *current = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = num;
	if (*h)
	{
		current = *h;
		while (current->next != NULL)
			current = current->next;

		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}

	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
	return (*h);
}
