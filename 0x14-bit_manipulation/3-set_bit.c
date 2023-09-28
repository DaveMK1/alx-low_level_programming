#include "main.h"

/**
 * set_bit - Sets a specific bit at a given position
 * @n: A pointer to the unsigned long integer where the bit will be set
 * @index: he position (bit index) to set
 * Return: 1 if the bit is successfully set,
 * or -1 if the index is out of range
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	bitmask <<= index;

	*n |= bitmask;

	return (1);
}
