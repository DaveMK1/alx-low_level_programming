#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of 612852475143
  *
  * Return: Always 0
  */

int main(void)
{
long i, maxf;
long number = 612852475143;
double square = sqrt(number);

for (i = 1; i <= square; i++)
{
if (number % i == 0)
{
maxf = number / i;
}
}

printf("%ld\n", maxf);

return (0);
}