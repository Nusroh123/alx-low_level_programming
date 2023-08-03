#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer number
 * @index: position of the bit in the  number
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	bit = 1;
	bit <<= index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/** (n & bit) used for checking the state of a specific bit**/
	return ((n & bit) != 0 ? 1 : 0);
}
