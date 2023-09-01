#include "main.h"
#include <stdio.h>

/**
 * main - print its name
 * @argc: argument count
 * @argv: an array of a command listed
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
