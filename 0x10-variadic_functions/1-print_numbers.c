#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed
 * @separator: the character that separates the numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		if (x > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
