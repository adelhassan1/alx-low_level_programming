#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content == NULL)
		return (1);
	while (text_content[len])
		len++;

	if (fd == -1)
		return (-1);
	if (write(fd, text_content, len) < 0)
		return (-1);
	if (!filename)
		return (-1);
	close(fd);
	return (1);
}
