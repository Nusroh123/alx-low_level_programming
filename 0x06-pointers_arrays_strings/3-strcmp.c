#include "main.h"
#include <string.h>

/**
 * _strcmp - compare between two string
 * @s1: first string
 * @s2: second string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
	}
	return (1);
}
