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
	if (d == NULL)
		return (NULL);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("age: %f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
