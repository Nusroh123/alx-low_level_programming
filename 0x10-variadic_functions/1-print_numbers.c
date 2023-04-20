#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));

		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
