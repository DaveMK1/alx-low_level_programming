#include "main.h"
#include <stdio.h>

/**
 * error_file - Handle file-related errors
 * @source_fd: File descriptor for source file
 * @destination_fd: File descriptor for destination file
 * @argv: arguments vector
 */
void error_file(int source_fd, int destination_fd, char *argv[])
{
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destination_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
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
	int close_source, close_destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_fd = open(argv[1], O_RDONLY);
	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(source_fd, destination_fd, argv);

	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(source_fd, buffer, 1024);
		if (bytes_read == -1)
			error_file(-1, 0, argv);
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_file(0, -1, argv);
	}
	close_source = close(source_fd);

	if (close_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	close_destination = close(destination_fd);

	if (close_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}
	return (0);
}
