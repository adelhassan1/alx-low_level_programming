#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 * @n: number of args.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		current = va_arg(args, char *);
		if (current == NULL)
			printf("(nil");
		else
			printf("%s", current);

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
