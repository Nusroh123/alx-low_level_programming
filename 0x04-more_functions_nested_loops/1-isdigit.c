#include "main.h"
#include <ctype.h>

/**
 * _isdigit - chaeck for digit 0-9
 * @c: parameter used
 * Return:1 if digit otherwise, 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
