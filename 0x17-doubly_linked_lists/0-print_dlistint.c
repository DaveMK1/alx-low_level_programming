#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 *
 * @head: head of the list
 * Return: number of nodes of the double linked list
 */
size_t print_dlistint(const dlistint_t *head)
{
	int count;

	count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}
