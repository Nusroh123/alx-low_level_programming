#include "main.h"
#include <string.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: pointer
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
