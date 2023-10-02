#include "main.h"
#include <stdio.h>

/**
 * error_file - Handle file-related errors
 * @file_from: File descriptor for source file
 * @file_to: File descriptor for destination file
 * @argv: arguments vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	dprintf(STDERR_FILENO, "Error: ");
	switch (error_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Can't write to file %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Can't close fd %s\n", filename);
			break;
	}
	exit(error_code);
}

/**
 * main - Copy the contents of one file to another
 * @argc: Number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		handle_error(97, "");

	source_fd = open(argv[1], O_RDONLY);
	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (source_fd == -1 || destination_fd == -1)
		handle_error(source_fd == -1 ? 98 : 99, argv[1]);

	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(source_fd, buffer, 1024);
		if (bytes_read == -1)
			handle_error(98, argv[1]);

		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written == -1)
			handle_error(99, argv[2]);
	}
	if (close(source_fd) == -1)
		handle_error(100, argv[1]);

	if (close(destination_fd) == -1)
		handle_error(100, argv[2]);

	return (0);
}
