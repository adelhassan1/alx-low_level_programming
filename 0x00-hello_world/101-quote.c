#include <stdio.h>

/*
 * main - print without printf
 *
 * Description: using write func
 *
 * Return: 0
 */

int main(void)
{
	const char* message = and that piece of art is useful\" - Dpra Lpr[ar. 2015-10-19";
	size_t len = strlen(message);
	write(1, message, len);
	return (0);
}
