#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: the name of the file and
 * @text_content: is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	while (text_content[len])
		len++;
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (write(fd, text_content, len) < 0)
		return (-1);
	if (!filename)
		return (-1);
	close(fd);
	return (1);
}
