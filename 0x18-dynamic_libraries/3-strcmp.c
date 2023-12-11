#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
int x, y;

x = 0;

while (s1[x] == s2[x] && s1[x] != '\0')
{
x++;
}

y = s1[x] - s2[x];
return (y);
}
