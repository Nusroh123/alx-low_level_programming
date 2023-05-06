#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: binary number
 * @index: position
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, ret;

	mask = 1 << index;
	ret = *n &= ~mask;

	if (ret)
		return (1);
	else
		return (-1);
	return (ret | !ret);
}
