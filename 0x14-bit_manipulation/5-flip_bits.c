#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - sets the value of a bit to 1 at a given index.
 * @n: binary number1
 * @m: binary number2
 * Return: nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, ret;

	mask = 1 << m;
	ret = (n ^= mask);

	return (ret);
}
