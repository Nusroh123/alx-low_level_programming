#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal num
 * @index: index
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	bit = 1;
	bit = bit << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

<<<<<<< HEAD
	return ((n & bit) ? 1 : 0);
=======
	return ((n & bit) != 0 ? 1 : 0);
>>>>>>> 3acdf9b2875822d6300fcf3c9ca00bd20fcbc193
}
