#include "dog.h"

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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->owner = owner;
	return (new_dog);
}
