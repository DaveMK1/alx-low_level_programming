#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - Calculates the number of bits required to transform
  * one number into another
  *
  * @n: The first number
  * @m: The second number
  *
  * Return: The number of bits that need to be flipped to convert 'n' into 'm'
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int count = 0;

	while (xorResult > 0)
	{
		if (xorResult & 1)
		{
			count++;
		}

		xorResult >>= 1;

	}

	return (count);
}
