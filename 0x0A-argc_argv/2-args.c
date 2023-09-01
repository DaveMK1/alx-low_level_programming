#include <stdio.h>
#include "main.h"

/**
 * main - Prints the argument contents
 * @argc: argument count
 * @argv: an array of a command listed
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
