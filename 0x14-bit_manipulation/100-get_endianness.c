#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;

	char *byte_ptr = (char *)&i;

	return (*byte_ptr == 1 ? 1 : 0);
}
