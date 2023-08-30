/**
 * _sqrt - Returns the natural square root of a number
 * @x: previous value
 * @y: the square value
 * Return: square root
 */

int _sqrt(int x, int y)
{
	if (x > y)
	{
		return (-1);
	}
	else if (x * x == y)
	{
		return (x);
	}

	return (_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - recursive square root of a number
 * @n: the integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
