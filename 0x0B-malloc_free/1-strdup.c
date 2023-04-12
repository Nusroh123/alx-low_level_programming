#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly
 * allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: pointer
 *  Return: a NULL or a pointer
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	copy = (char *)malloc((sizeof(char) * len) * i);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';
	return (copy);
}
