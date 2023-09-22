#include "lists.h"

/**
 * get_length - returns the length of a string
 * @str: string length to be determined
 *
 * Return: length of string
 */

unsigned int get_length(const char *str)
{
	unsigned int a, length = 0;

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
 * add_node - Adds a new node at the beginning of a list
 * @head: Original linked list
 * @str: The string
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new == NULL)
		return (NULL);
	len = get_length(str);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
