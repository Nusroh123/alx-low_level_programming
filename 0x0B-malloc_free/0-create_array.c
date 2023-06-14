#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of character
 * and iniiatilizes it with a specific character
 * @size: size of array
 * @c: the character to be printed
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
