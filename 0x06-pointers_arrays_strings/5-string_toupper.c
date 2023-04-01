#include "main.h"
#include <string.h>

/**
 * string_toupper -  changes all lowercase letters to uppercase
 * @s: pointer
 * Return: a character
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
