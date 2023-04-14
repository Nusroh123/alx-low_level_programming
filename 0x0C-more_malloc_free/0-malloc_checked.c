#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: integer value
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pt  = malloc(b);

	if (pt == NULL)
		exit(98);
	return (pt);
}
