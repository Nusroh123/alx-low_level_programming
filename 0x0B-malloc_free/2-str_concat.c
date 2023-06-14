#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer on success, else, NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	result = (char *)malloc((total_len + 1) * sizeof(char));

	if (result != NULL)
	{
		strcpy(result, s1);
		strcat(result, s2);
	}

	return (result);
}
