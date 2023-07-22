#include <stdio.h>
/**
 * main - printing without printf or puts
 * Return: 0 (success)
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i < 58; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (1);
}
