#ifndef DOG_H
#define DOG_H


/**
 * struct dog - struction for dogs.
 *
 * @name: member 1.
 * @age: member 2.
 * @owner: member 3.
 *
 * Description: structures.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef struct dog dog_t - typedef.
 *
 * Description: name for struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
