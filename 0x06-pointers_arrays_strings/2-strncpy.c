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
	int i = 0;

	while (i < 0 && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
