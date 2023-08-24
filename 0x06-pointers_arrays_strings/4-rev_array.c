#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: Array of integers
  * @n: Number of elements of an array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
int *p, x, aux, y;

p = a;

for (x = 1; x < n; x++)
{
p++;
}

for (y = 0; y < x / 2; y++)
{
aux = a[y];
a[y] = *p;
*p = aux;
p--;
}
}
