#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: the string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int x, d, n, len, f, digit;

	x = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (str[x] == '-')
			++d;

		if (str[x] >= '0' && str[x] <= '9')
		{
			digit = str[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (str[x + 1] < '0' || str[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}
