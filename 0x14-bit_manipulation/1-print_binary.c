#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int bit;

	i = 0;
	bit = 1;
	bit <<= sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
		_putchar('0');

	while (bit > 0)
	{
		if ((n & bit) != 0 || i)
		{
			_putchar((n & bit) != 0 ? '1' : '0');
			i = 1;
		}
		bit >>= 1;

	}

}
