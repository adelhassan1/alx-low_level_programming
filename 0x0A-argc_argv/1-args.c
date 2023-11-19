#include <stdio.h>

/**
 * main - return the number of args given.
 *
 * @argc - nmber of args given.
 * @argv - array of the args.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) argc **argv)
{
	printf("%d\n", argc - 1);
	return 0;
}
