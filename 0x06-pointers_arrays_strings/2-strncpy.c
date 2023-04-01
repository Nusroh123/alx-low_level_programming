#include "main.h"
#include <string.h>

/**
 * _strncpy - it copiess a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
