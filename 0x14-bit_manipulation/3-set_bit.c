#include "main.h"

/**
 * set_bit - set bit at a given index
 * @n: integer number
 * @index: position of the bit
 * Return: 1 or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
