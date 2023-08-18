#include "main.h"

/**
  * print_square - Prints squares according number of times
  * @size: The number of squares
  *
  * Return: void
  */

void print_square(int size)
{
int a, b;

if (size <= 0)
{
_putchar('\n');
}
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
