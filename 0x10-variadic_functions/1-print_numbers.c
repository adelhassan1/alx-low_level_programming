#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: number of args.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			break;
		if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
