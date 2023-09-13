#include "3-calc.h"

/**
 * op_add - returns sum of two numbers
 * @x: int parameter
 * @y: int parameter
 *
 * Return: (@x + @y)
 */

int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - returns difference of two numbers
 * @x: int parameter
 * @y: int parameter
 *
 * Return: (@x - @y)
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - returns product of two numbers
 * @x: int parameter
 * @y: int parameter
 *
 * Return: (@x * @y)
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - returns quotient of two numbers
 * @x: int parameter
 * @y: int parameter
 *
 * Return: (@x / @y)
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - returns the remainder from division of two numbers
 * @x: int parameter
 * @y: int parameter
 *
 * Return: (@x % @y)
 */
int op_mod(int x, int y)
{
	return (x % y);
}
