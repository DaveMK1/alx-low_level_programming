#include "lists.h"

/**
 * sum_listint - Computes the sum of all elements in a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: The sum of all elements in the linked list.
 * If the list is empty, returns 0
 */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		amount += head->n;
		head = head->next;
	}
	return (amount);
}
