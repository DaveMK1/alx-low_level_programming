#include "main.h"

/**
 * length - length of the string
 * @s: string to be checked
 * Return: the string length
 */

int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * help - the length of the string by index
 * @i: the integer
 * @s: string
 * Return: integer value of the result
 */

int help(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		return (help(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - is current value equal to the previous value
 * @s: string
 * Return: integer value
 */

int is_palindrome(char *s)
{
	int i = 1;

	return (help(i, s));
}
