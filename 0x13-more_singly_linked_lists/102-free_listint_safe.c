#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - Search for a loop within a linked list
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: Address of the node where the loop starts, or NULL if no loop exists
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			if (ptr == end->next)
				return (end->next);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - Frees a listint list safely, even if it contains a loop.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes that were successfully freed.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *next, *loopnode;
	size_t len = 0;
	int loop = 1;

	if (head == NULL || *head == NULL)
		return (0);

	loopnode = find_listint_loop_fl(*head);

	while (*head != NULL && (*head != loopnode || loop))
	{
		len++;
		next = (*head)->next;

		if (*head == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*head);
				break;
			}
			len++;
			next = next->next;
			free((*head)->next);
			loop = 0;
		}
		free(*head);
		*head = next;
	}
	*head = NULL;
	return (len);
}
