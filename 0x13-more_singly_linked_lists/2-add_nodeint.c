#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning
 * @head: head of the linked list
 * @n: the data to be stored in the new node
 * Return: pointer to the newly created node, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
