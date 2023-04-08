#include "main.h"

/**
 * pre_sqrt - _sqrt_recursion
 * @n: int n
 * @i: int i
 * Return: sqrt
 */
int pre_sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (pre_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of an int
 * @n: natural integer to be calculated
 * Return: An integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (pre_sqrt(n, 1));
}
