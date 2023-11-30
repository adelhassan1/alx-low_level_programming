#include "3-calc.h"

/**
 * op_add - adding two integers.
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting two integers.
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying two integers.
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing two integers.
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: a / b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two integers.
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: a % b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
