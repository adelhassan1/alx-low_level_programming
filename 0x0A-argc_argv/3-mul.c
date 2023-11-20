#include <stdio.h>

/**
 * main - multiplying two nums.
 *
 * @argc: number of args.
 * @argv: array of args.
 *
 * Return: Always 0.
 */

void main(int argc, char **argv)
{
	int sum;

	if (argc < 3)
	{
		printf("Error")
	} else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
