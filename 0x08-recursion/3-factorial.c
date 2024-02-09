#include "main.h"
/**
 * factorial - factorial of a number
 * @n: number given to get it's factorial
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
