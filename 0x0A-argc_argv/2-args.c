#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments.
 *
 * @argc - number of args.
 * @argv - array of args.
 *
 * Return: Always 0.
 */

void main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return;
}
