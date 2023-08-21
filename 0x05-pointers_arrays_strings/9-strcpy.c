#include "main.h"

/**
  * _strcpy - Copy the string
  * @dest: value of destination
  * @src: value of source
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
int x;

for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}

dest[x++] = '\0';

return (dest);
}
