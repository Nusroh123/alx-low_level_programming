#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian and 1 if litle endian
 */
int get_endianness(void)
{
	unsigned int value;
	unsigned char *ptr;

	value = 1;
	ptr = (unsigned char *)&value;
	if  (*ptr == 1)
		return (1);
	else
		return (0);

}
