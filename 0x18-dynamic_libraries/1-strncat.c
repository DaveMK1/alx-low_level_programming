#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: Destination value
  * @src: Source value
  * @n: The number of bytes to be concatenation
  * Return: Pointer to destination string
  */

char *_strncat(char *dest, char *src, int n)
{
int string_length = 0, x = 0;

while (dest[string_length])
{
string_length++;
}

while (x < n && src[x])
{
dest[string_length] = src[x];
string_length++;
x++;
}

dest[string_length + n + 1] = '\0';

return (dest);
}
