#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned integer
 * @b: binary number
 * Return: integer number or 0 if there is a number
 * other than 1 and 0 and when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total;

	total = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		/**Multiplying by 2 and converting b[i] to integer value**/
		total = (total << 1) + (b[i] - '0');
	}
	return (total);
}
