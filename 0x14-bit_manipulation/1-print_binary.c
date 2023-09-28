#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number
 * @n: The decimal number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int bit;
	static int first_call;

	if (n == 0 && first_call > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	bit = (n & 1);
	first_call++;
	print_binary(n >>= 1);
	_putchar('0' + bit);
}
