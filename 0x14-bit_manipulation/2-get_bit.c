#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at a given index
 * @n: The decimal number containing the target bit
 * @index: The index of the bit to be retrieved
 *
 * Return: The value of the bit at the specified index (0 or 1) or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
