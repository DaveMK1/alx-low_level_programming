#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Description: finds the first character in the string
 * that matches any character specified in accept.
 * This does not include terminating null-characters.
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x, j;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[x] == accept[j])
			{
				return (s + x);
			}
		}
	}

	return (0);
}
