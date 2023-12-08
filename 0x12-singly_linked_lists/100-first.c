#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * first - print a string before the main func.
 */

hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
