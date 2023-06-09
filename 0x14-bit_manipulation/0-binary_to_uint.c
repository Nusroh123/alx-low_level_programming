#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b:  binary number
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int t;

	t = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' && b[i] == '0')
		{
			return (0);
		}
		t <<= 1;

		if (b[i] == '1')
		{
			t += 1;
		}
	}

	return (t);
}
