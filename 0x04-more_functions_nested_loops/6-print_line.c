#include "main.h"

/**
  * print_line - Draws a straight line
  * @n: number of lines to draw
  *
  * Return: always 0
  */

void print_line(int n)
{
int x;

for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}
