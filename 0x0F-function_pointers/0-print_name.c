#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: array of name
 * @f: pointer to a function
 * having a pointer as a parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
