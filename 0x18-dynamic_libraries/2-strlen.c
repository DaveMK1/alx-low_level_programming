#include "main.h"

/**
  * _strlen - Returns length of a string
  * @s: String to be counted
  *
  * Return: String length
  */

int _strlen(char *s)
{
int c = 0;

for (; *s != '\0'; s++)
{
c++;
}

return (c);
}
