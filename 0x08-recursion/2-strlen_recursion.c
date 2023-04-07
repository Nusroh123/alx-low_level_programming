#include "main.h"

/**
 * _strlen_recursion(char *s) - lenth of a string
 * @s: pointer
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
