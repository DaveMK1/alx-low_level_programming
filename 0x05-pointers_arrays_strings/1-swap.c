#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: first integer to swap
  * @b: second integer to swap
  *
  * Return: 0
  */

void swap_int(int *a, int *b)
{
int change;

change = *a;
*a = *b;
*b = change;
}
