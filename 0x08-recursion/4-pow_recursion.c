#include "main.h"

/**
  * _pow_recursion - raises an integer to the power
  * @x: the integer to be raised
  * @y: power
  *
  * Return: value multiplied y times
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
