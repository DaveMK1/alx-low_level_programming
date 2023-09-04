#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - concatenates two strings
  * @s1: string to concatenate
  * @s2: the other string to concatenate
  *
  * Return: the two strings concatenated
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, x = 0, y = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[x])
		x++;

	l = i + x;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	x = 0;

	while (y < l)
	{
		if (y <= i)
			s[y] = s1[y];

		if (y >= i)
		{
			s[y] = s2[x];
			x++;
		}

		y++;
	}

	s[y] = '\0';
	return (s);
}
