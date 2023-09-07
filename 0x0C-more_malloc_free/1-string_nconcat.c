#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of characters to be copied
 * Return: copied
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, x;
	char *s;

	/* if NULL is passed, treat as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* While at index 0 */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	/* Memory allocation */
	s = malloc(sizeof(char) * n + s1_len + 1);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < s1_len; x++)
		s[x] = s1[x];

	for (x = 0; x < n; x++)
		s[x + s1_len] = s2[x];

	s[x + s1_len] = '\0';

	return (s);
}
