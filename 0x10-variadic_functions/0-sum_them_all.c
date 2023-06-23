#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of arguments
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, value;
	unsigned int i;
	va_list args;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}
