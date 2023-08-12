#include <stdio.h>

/**
 * main - Prints combination of two numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
int ones = '0';
int tens = '0';

for (tens = '0'; tens <= '9'; tens++)
{
for (ones = '0'; ones <= '9'; ones++)
{
if (!((ones == tens) || (tens > ones)))
{
putchar(tens);
putchar(ones);
if (!(ones == '9' && tens == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
