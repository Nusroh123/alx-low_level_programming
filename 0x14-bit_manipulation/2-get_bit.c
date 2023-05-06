#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: the bit to be gotten
 * @index: position
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	mask = n >> index;

	if (mask & 1)
		return (1);
	else if (mask & 0)
		return (-1);
	else
		return (0);
	return (mask & (1 | 0));
}
