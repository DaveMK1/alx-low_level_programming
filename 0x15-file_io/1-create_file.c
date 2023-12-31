#include "main.h"

/**
 * create_file - Create a file and write the content to it
 * @filename: The name of the file to read from
 * @text_content: content written in the file.
 *
 * Return: 1 if success. -1 if failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int content_length;
	int bytes_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (content_length = 0; text_content[content_length]; content_length++)
		;

	bytes_written = write(file_descriptor, text_content, content_length);

	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
