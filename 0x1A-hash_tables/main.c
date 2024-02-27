#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%d\n",hash_table_set(ht, "hetairas", "mentioner"));
	printf("%d\n",hash_table_set(ht, "heliotropes", "neurospora"));
	/**printf(hash_table_set(ht, "depravement", "serafins"));
	printf(hash_table_set(ht, "dasf", "mentioner"));
	printf(hash_table_set(ht, "hetairas", "mentioner"));
	printf(hash_table_set(ht, "hetairas", "mentioner"));
	*/
    return (EXIT_SUCCESS);
}
