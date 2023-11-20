#include <stdio.h>

/**
 * main - print all arguments.
 *
 * @argc: number of args.
 * @argv: array of args.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
