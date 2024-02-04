#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: file passed.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t actual_read;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	actual_read = read(fd, buffer, letters);
	if (actual_read == -1 || fd == -1)
		return (0);
	if (write(STDOUT_FILENO, buffer, letters) < 0)
		return (0);
	close(fd);
	return (actual_read);
}
