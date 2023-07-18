#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The struct dog
 * @name: First member char
 * @age: The float
 * @owner: Second member char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
