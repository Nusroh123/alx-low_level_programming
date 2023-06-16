#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, total_len;
	char *str_con;


	s1 = 0;
	s2 = 0;
	if (s1 != NULL || s2 != NULL)
	{
		l1 = strlen(s1);
		l2 = strlen(s2);
		total_len = l1 + l2;
	}
	if (n >= l2)
	{
		total_len = l1 + l2;
	}
	total_len = l1 + n;

	str_con = (char *)malloc((total_len + 1) * sizeof(char));

	if (str_con == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(str_con, s1);
	else
		str_con[0] = '\0';

	if (n >= l2)
		strcat(str_con, (s2 != NULL) ? s2 : "");
	else
	{
		strncat(str_con, (s2 != NULL) ? s2 : "", n);
		str_con[total_len] = '\0';
	}

	return (str_con);
}
