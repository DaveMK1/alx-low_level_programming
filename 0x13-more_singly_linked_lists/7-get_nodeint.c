#include "lists.h"

/**
 * get_nodeint_at_index - Retrieve a node at a specific index
 * @head: Pointer to the first node in the linked list
 * @index: index of the desired node
 *
 * Return: The node at the given index, or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
		return (current);

	return (NULL);
}
