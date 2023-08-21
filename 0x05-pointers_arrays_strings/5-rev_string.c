#include "main.h"

/**
  * rev_string - prints string in reverse
  * @s: string to be changed
  *
  * Return: 0
  */

void rev_string(char *s)
{
int length, c, half;
char *a, aux;

a = s;

while (s[c] != '\0')
{
c++;
}

for (half = 1; half < c; half++)
{
a++;
}

for (length = 0; length < (c / 2); length++)
{
aux = s[length];
s[length] = *a;
*a = aux;
a--;
}
}
