#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog. Defines the dogs fields or members.
 * @name: First member. Name of the dog
 * @age: Second member: Dog's age.
 * @owner: Third member: Owner of the dog.
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
