#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: initial string searched
 * @needle: substring to be located
 *
 * Return: pointer to first occurence of the given string
 */

char *_strstr(char *haystack, char *needle)
{
	int x, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[x + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
			{
				return (haystack + x);
			}
		}
	}
	return ('\0');
}
