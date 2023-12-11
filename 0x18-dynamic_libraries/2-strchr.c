#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the string to be scanned
 * @c: the character to be located
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (s[x] == c)
		return (s + x);

	return (0);
}
