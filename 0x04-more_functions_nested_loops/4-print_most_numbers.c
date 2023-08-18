#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9 excluding 2 and 4
  *
  * Return: void
  */

void print_most_numbers(void)
{
char a = 0;

for (a = '0'; a <= '9'; a++)
{
if (!(a == '2' || a == '4'))
_putchar(a);
}
_putchar('\n');
}
