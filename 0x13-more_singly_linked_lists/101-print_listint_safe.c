#include "lists.h"

/**
 * print_listint_safe - Prints a linked list with loop detection
 * @head: Pointer to the first node of the linked list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;
	size_t counter = 0;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		counter++;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			return (counter);
		}
	}
	return (counter);
}
