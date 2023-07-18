#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - To print a fxn that initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: First member Character
 * @age: Float member
 * @owner: Second member Character
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
