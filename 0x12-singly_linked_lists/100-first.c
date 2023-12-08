#include <stdio.o>

void __attribute__((constructor)) first(void);

/**
 * first - print a string before the main func.
 */

first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
