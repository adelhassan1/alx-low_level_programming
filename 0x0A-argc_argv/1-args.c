#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argv) void(argv)
/**
 * main - return the number of args given.
 *
 * @argc - nmber of args given.
 * @argv - array of the args.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc);
	return 0;
}
