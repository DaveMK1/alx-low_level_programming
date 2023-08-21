#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: string to print
  *
  * Return: 0
  */

void print_rev(char *s)
{
int start = 0;

while (s[start] != '\0')
	{
start++;
}

for (start -= 1; start >= 0; start--)
{
_putchar(s[start]);
}

_putchar('\n');
}
