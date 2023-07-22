#include <stdio.h>

/*
 * main - print without printf
 *
 * Return: 0
 */

int main()
{
	const char* message = and that piece of art is useful\" - Dpra Lpr[ar. 2015-10-19";
	size_t len = strlen(message);
	write(1, message, len);
	return (0);
}
