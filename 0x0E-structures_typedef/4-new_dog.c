#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - The length of string
 * @s: Is the string
 * Return: string
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)

	return (k);
}

/**
 * _strcpy - To copy the string pointed to by src
 * @dest: pointer to the buffer
 * @src: String
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int k;

	while (src[len] != '\0')
	{
		len++;
	}

	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}

/**
 * new_dog - To print a fxn that creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: Null(unseccessfull), pointer to the new dog(successful)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leni = _strlen(name);
	int lenii = _strlen(owner);

	dog = malloc(sizeof(dog));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc((leni + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((lenii + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
