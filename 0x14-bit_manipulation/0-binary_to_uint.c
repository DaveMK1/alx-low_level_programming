#include "main.h"

/**
 * binary_to_uint - Converts a binary string to a decimal number
 * @b: A pointer to a string containing only '0' and '1' characters
 * Return: The decimal equivalent of the binary string, or 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			decimal = (decimal << 1) | 1;
		else if (*b == '0')
			decimal <<= 1;
		else
			return (0);
		b++;
	}

	return (decimal);
}
