#include "main.h"

/**
  * print_diagonal - Draws diagonal lines
  * @n: number of times to print diagonal lines
  *
  * Return: always 0
  */

void print_diagonal(int n)
{
int a, b;

if (n <= 0)
{
_putchar('\n');
}
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
