#include "main.h"

/**
  * _strncpy - Copies a string
  * @dest: Destination value
  * @src: Source value
  * @n: Number of bytes to be used
  *
  * Return: Pointer to destination string
  */

char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
dest[x] = src[x];

for (; x < n; x++)
dest[x] = '\0';

return (dest);
}
