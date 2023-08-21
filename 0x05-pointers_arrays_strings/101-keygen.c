#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: always 0 (success)
 */

int main(void)
{
int x = 0, r = 0;
time_t t;

srand((unsigned int) time(&t));
while (r < 2772)
{
x = rand() % 128;
if ((r + x) > 2772)
break;
r = r + x;
printf("%c", x);
}
printf("%c\n", (2772 - r));
return (0);
}
