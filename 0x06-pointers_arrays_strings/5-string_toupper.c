#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @x: String to be modified
  *
  * Return: pointer to uppercase string
  */

char *string_toupper(char *x)
{
int a = 0;

while (x[a])
{
if (x[a] >= 97 && x[a] <= 122)
{
x[a] -= 32;
}

a++;
}

return (x);
}
