#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initial a variable of type struct dog
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
