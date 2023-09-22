#include "lists.h"

/**
 * get_length - returns the length of a string
 * @str: string length to be determined
 *
 * Return: length of string
 */

unsigned int get_length(const char *str)
{
	int a, length = 0;

	if (str == NULL)
		return (0);
	a = 0;
	while (str[a] != '\0')
	{
		length++;
		a++;
	}
	return (length);
}

/**
 * add_node_end - adds a new node to end of linked list
 * @head: linked list
 * @str: sets the string attribute of the new node
 *
 * Return: address of linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	i = get_length(str);
	last = *head;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
