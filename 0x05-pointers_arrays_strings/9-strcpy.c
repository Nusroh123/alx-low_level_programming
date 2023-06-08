#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	long unsigned int i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
