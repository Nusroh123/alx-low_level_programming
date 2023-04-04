#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer
 * @c: the character being searched for
 * Return: either c or 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
