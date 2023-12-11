#include "main.h"

/**
 * *_memcpy - copies n characters from the memory
 * area source to the memory area destination
 * @dest: the memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
