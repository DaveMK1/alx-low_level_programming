#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in
 * a double linked list
 *
 * @head: head of the list
 * Return: Number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *head)
{
	int count;

	count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
