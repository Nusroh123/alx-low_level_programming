#include "main.h"
#include <string.h>

/**
 * _memset - writes a function that fills the memory with a constant byte
 * @s: pointer
 * @b: value to be copied
 * @n: numberof bytes to set
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =  0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
