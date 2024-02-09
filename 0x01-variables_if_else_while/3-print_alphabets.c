#include <stdio.h>
/**
 * main - print alpha
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char b;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
