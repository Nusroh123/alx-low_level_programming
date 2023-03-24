#include "main.h"
#include <ctype.h>

/**
 * _islower - 'search for lowercase character'
 * @c: the number to be checked
 * Return: int
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
