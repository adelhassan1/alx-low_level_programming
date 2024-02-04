#include "main.h"

int cp_file(char *file_from, char *file_to);

/**
 * main - a program that copies the content of a file to another file.
 * 
 * @ac: number of args.
 * @av: args.
 *
 * Return: 0. 
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}

/**
 * cp_file - cp from first to sec.
 *
 * @file_to: the file writing to.
 * @file_from: the file writing from.
 *
 * Return: 0 on success
 */

int cp_file(char *file_from, char *file_to)
{
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t actual_read = 1024;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(98);
	}

	while (actual_read == 1024)
	{
		actual_read = read(fd_from, buffer, 1024);
		if (write(fd_to, buffer, actual_read) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
