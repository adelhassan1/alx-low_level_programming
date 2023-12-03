#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struction for dogs.
 *
 * @name: member 1.
 * @age: member 2.
 * @owner: member 3.
 *
 * Return: Nothing.
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

typedef struct dog dog_t;

#endif
