#include <stdio.h>
/**
 * main - printing nums
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (m = 48; m <= 57; m++)
				{
					if (m < j && k < j)
						continue;
					if (i == k && j == m)
						continue;
					if (k == i && m < j)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i == 57 && k == 57 && m == 57 && j == 56)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
