#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a string of bytes
 * @s: pointer
 * @accept: bytes
 * Return:accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
