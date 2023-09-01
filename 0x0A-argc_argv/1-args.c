#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: argument count
 * @argv: an array of a command listed
 * Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
