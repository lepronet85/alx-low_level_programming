#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog type
 * @name: The Dog's name
 * @age: The Dog's age
 * @owner: The dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
