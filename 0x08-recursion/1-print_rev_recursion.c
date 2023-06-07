#include "main.h"

/**
 * _print_rev_recursion - print string in reverse order
 * @s: string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
