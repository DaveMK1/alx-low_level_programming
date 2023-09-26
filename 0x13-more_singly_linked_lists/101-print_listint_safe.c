#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_loop_start - Finds the start of a loop in a linked list
 *
 * @head: The head of the linked list
 *
 * Return: The node where the loop starts, or NULL if there's no loop
 */

listint_t *find_loop_start(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

/**
 * print_listint_safe - Prints a linked list safely even if it has a loop
 *
 * @head: The head of the linked list
 *
 * Return: The number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;
	listint_t *loopStart = find_loop_start((listint_t *)head);
	int isInLoop = 1;

	while (head != NULL && (head != loopStart || isInLoop))
	{
		printf("[%p] %d\n", (void *)head, head->n);

		if (head == loopStart)
			isInLoop = 0;

		head = head->next;
		nodeCount++;
	}
	if (loopStart != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (nodeCount);
}
