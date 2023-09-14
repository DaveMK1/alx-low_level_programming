#include "variadic_functions.h"

/**
 * print_all - prints the arguments that are passed to it in any format
 * @format: the format of the argument
 */

void print_all(const char * const format, ...)
{
	unsigned int x, y, sep = 0;
	char *str;
	char c_args[] = "cifs";
	va_list args;

	va_start(args, format);
	x = 0;
	while (format && format[x])
	{
		y = 0;
		while (c_args[y])
		{
			if (format[x] == c_args[y] && sep)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int)), sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), sep = 1;
				break;
			case 's':
				str = va_arg(args, char *), sep = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} x++;
	} va_end(args), printf("\n");
}
