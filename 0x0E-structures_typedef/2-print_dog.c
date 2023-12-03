#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 *
 * @d: pointer.
 *
 * Return: NULL.
 */

void print_dog(struct dog *d)
{
	char *nothing = "(nil)"
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	if (d->name == NULL)
		printf("Name: %s\n", nothing);
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("age: %d\n", nothing);
	else
		printf("age: %d\n", d->age);

	if (d->owner == NULL)
		printf("owner: %s\n", nothing);
	else
		printf("owner: %s\n", d->owner);
}
