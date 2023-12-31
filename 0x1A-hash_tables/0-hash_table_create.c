#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @s: the size of the array
 * Return: pointer to the newly created hash table or NULL(ON FAILURE)
 */
hash_table_t *hash_table_create(unsigned long int s)
{
	hash_table_t *new_table;
	unsigned long i;

	if (s == 0 || s > ULONG_MAX)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * s);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = s;

	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
