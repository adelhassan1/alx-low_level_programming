#include "dog.h"

/**
 * free_dog - a function to free dogs.
 *
 * @d: pointer.
 */

void free_dog(dog_t *d)
{
	free(d);
}
