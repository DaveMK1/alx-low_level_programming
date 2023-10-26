#include "main.h"

/**
 * clear_bit - Clears a specific bit at a given position in a number
 * @n: A pointer to the number whose bit will be cleared
 * @index: The position (bit index) to clear
 * Return: 1 if the bit is successfully cleared,
 * or -1 if the index is out of range
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	bitmask <<= index;

	*n &= ~bitmask;

	return (1);
}
