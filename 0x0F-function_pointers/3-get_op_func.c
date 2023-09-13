#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - determines which of the operations to use
 * @s: string parameter
 *
 * Return: pointer to operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x;

	x = 0;
	while (ops[x].f != NULL)
	{
		if (*s == *(ops[x].op) && s[1] == '\0')
			return (ops[x].f);
		x++;
	}

	printf("Error\n");
	exit(99);
}
