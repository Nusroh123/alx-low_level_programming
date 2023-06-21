#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	for (count = 0; *s != '\0'; count++)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strcpy - copy string
 * @old: source
 * @new: destination
 * Return: pointer to new
 */
char _strcpy(char *new, char *old)
{
	int i;

	for (i = 0; old[i] != '\0'; i++)
		new[i] = old[i];

	new[i++] = '\0';

	return (new);
}

/**
 * new_dog - struct of a new dog
 * @name: name
 * @age: new age
 * @owner: new owner
 * Return: dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nameL, ownerL;

	nameL = 0;
	ownerL = 0;

	if (name != NULL && owner != NULL)
	{
		nameL = _strlen(*name) + 1;
		ownerL = _strlen(*owner) + 1;
		pet = malloc(sizeof(dog_t));

		if (pet == NULL)
			return (NULL);

		pet->name = malloc(sizeof(char) * nameL + 1);

		if (pet->name == NULL)
		{
			free(pet);
			return (NULL);
		}

		pet->owner = malloc(sizeof(char) * ownerL + 1);

		if (pet->owner == NULL)
		{
			free(pet->name);
			free(pet);
			return (NULL);
		}

		pet->name = _strcpy(pet->name, name);
		pet->owner = _strcpy(pet->owner, owner);
		pet->age = age;
	}
	return (pet);
}
