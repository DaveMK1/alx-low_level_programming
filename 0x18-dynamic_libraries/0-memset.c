#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of buffer spaces to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
