#include "hash_tables.h"

/**
 * free_array_item_content - frees the item of a hash table array
 * @item: linked list containing collided items
 * Return: nothing
 */
void free_array_item_content(hash_node_t **item)
{
	hash_node_t *temp;

	while (*item != NULL)
	{
		temp = (*item)->next;
		free((*item)->key);
		free((*item)->value);
		free(*item);
		*item = temp;
	}
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_array_item_content(&(ht->array[i]));
		}
	}
	free(ht->array);
	free(ht);
}
