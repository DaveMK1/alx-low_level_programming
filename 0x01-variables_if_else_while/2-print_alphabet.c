#include <stdio.h>
#include <ctype.h>

/**
 * main - Determine if a random number is positive, negative or
 zero
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
