#include "main.h"

/**
 * read_textfile - Read and print characters from a text file
 * @filename: The name of the file to read from
 * @letters: The number of characters to read and print
 *
 * Return: The number of characters successfully printed. If the function
 * fails or encounters an error, it returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	return (bytes_written);
}
