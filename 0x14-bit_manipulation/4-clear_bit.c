#include "main.h"

/**
 * clear_bit - set a bit to zero at a given index
 * @n: integer number
 * @index: position of bit
 * Return: 1 or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
