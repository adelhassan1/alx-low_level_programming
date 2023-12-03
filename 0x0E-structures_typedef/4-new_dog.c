#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: member 1.
 * @age: member 2.
 * @owner: member 3.
 *
 * Return: the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog == NULL)
		return (NULL);
	else
	{
		new_dog->name = name;
		new_dog->owner = owner;
		return (new_dog);
	}
}
