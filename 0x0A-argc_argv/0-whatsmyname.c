#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argc) (void)(argc)
/**
 * main - printing the program name.
 *
 * @argc - the number of arguments.
 * @argv - array contains the arguments.
 *
 * Return: Always 0.
 */

void main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return;
}
