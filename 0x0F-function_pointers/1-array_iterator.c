#include <stdio.h>

/**
 * array_iterator - a function that has parameters:
 * array of integer
 * size
 * pointer to a function
 * @array: ...
 * @size: ...
 * @action: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
