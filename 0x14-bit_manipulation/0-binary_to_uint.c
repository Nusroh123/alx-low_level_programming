#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: value or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int i;

	val = 0;
	i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val = val << 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
