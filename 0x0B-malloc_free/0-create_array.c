#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to fill in the array
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (x < size)
	{
		*(p + x) = c;
		x++;
	}

	*(p + x) = '\0';

	return (p);
}
