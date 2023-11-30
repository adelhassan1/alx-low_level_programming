#include "3-calc.h"

/**
 * main - main func.
 *
 * @argc: number of arguments given.
 * @argv: the argumnets.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
