#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of
 * type struct dog.
 *
 * @d: member 1.
 * @name: member 2.
 * @age: member 3.
 * @owner: member 4.
 *
 * Return: pointer to the variable.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
