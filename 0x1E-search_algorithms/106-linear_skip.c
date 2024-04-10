#include "search_algos.h"

/**
 * linear_skip - searches for value in a skip list
 * @list:  list to input
 * @value: value to search for
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *probe;

	if (list == NULL)
		return (NULL);

	probe = list;

	do {
		list = probe;
		probe = probe->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)probe->index, probe->n);
	} while (probe->express && probe->n < value);

	if (probe->express == NULL)
	{
		list = probe;
		while (probe->next)
			probe = probe->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)probe->index);

	while (list != probe->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
