#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: the array to go through
 * @size: the size of array
 * @action: action function to take
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		exit(98);
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
