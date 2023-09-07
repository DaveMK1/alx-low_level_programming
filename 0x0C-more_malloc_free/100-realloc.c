#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - allocate memory and set all values to 0
  * @ptr: pointer to the memory previously allocated (malloc(old_size))
  * @old_size: size previously allocated
  * @new_size: new size to reallocate
  *
  * Return: pointer to reallocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		nptr[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (nptr);
}
