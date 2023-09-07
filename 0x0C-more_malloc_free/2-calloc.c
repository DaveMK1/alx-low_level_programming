#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of members
 * @size: size on the array
 * Return: pointer string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		*(p + x) = 0;

	return (p);
}
