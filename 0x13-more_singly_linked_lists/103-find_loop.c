#include "lists.h"

/**
 * find_listint_loop - Find the starting node of a loop in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: A pointer to the node where the loop starts,
 * or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *h)
{
	listint_t *slow = h;
	listint_t *fast = h;

	if (!h)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
