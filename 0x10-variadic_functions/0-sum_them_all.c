#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 *
 * @n: number of paramters
 *
 * Return: the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int i;

	va_start(args, n);
	if (n != 0)
		for (i = 0; i < n; ++i)
			result += va_arg(args, int);
	else
		return (0);

	va_end(args);
	return (result);
}
