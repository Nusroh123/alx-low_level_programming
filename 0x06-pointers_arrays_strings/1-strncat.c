#include "main.h"

/**
 * _strncat - it concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: a character
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0';)
		dest_len++;
	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[dest_len + 1] = src[i];
	dest[dest_len + 1] = '\0';
	return (dest);
}
