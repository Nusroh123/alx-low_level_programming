#include "main.h"

/**
 * flip_bits - flipping a bit
 * @n: integer number
 * @m: integer number
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipXOR;
	unsigned int count;

	flipXOR = n ^ m;
	count = 0;

	while (flipXOR)
	{
		count += flipXOR & 1;
		flipXOR >>= 1;
	}
	return (count);

}
