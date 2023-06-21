#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dynamic memory allocated
 * @d: dog info
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
}
