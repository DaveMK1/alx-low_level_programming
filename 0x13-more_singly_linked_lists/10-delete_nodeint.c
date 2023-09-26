#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index
 * @head: A pointer to the pointer to the head of the list
 * @index: The index of the node to delete
 * Return: 1 if the deletion is successful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = NULL;
	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
