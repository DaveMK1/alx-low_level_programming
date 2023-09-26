#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: pointer to a pointer to the head node
 * Return: the data (n) of the deleted head node
 */

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	pop = temp->n;
	free(temp);

	return (pop);
}
