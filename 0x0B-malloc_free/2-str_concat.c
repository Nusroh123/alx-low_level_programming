#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: NULL or other
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *output;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	len = len1 + len2;
	output = (char *)malloc(sizeof(char) * (len + i));
	if (output == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		output[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		output[i] = s2[j];
	output[len] = '\0';
	return (output);
}
