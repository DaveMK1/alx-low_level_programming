#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: points to the first node on the linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
