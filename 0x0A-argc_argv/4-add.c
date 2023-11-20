#include <stdio.h>

/**
 * main - add positive numbers.
 * 
 * @argc: number of args.
 * @argv: array of args.
 *
 * Return: Always 0.
 */

void main (int argc, char **argv)
{
	int i, sum = 0;
	if (argc == 1)
	{
		printf(0);
	}else
	{
		for (i = 1; i < argc; i++)
		{
			if (i == NaN)
			{
				printf("Error");
			}else
			{
				sum += argv[i];
				printf("$s\n", sum);
			}
		}
	}
	return (0);
}
