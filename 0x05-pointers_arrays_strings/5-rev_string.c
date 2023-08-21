#include "main.h"

/**
  * rev_string - prints string in reverse
  * @s: string to be changed
  *
  * Return: 0
  */

void rev_string(char *s)
{
int length, x, half;
char temp;

for (length = 0; s[length]  != '\0'; length++)
;
x = 0;
half = length / 2;

while (half--)
{
temp = s[length - x - 1];
s[length - x - 1] = s[x];
s[x] = temp;
x++;
}
}
