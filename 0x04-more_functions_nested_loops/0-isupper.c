#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: parameter to check
 * Return: 1 if c, otherwise 0
 */
int _isupper(int c)
{
	if ( isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
