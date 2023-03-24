#include "main.h"
#include <ctype.h>

/**
 * _isalpha - 'Checks for alphabetical character'
 * @c: Alphabet to be checked
 * Return: int
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
