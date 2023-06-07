#include "main.h"

/**
 * factorial- calculate factorial
 * @n: number
 * Return: n!
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
