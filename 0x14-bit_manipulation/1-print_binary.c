#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - print binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 12; i >= 0; i--)
	{
		int k = n >> i;

		if (k & 1)
			_putchar('1');

		else
			_putchar('0');
	}
	_putchar('\n');
}
