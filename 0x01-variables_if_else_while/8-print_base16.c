#include <stdio.h>
/**
 * main - printing numbers of base 16
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int c;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (c = 97; c < 103; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
