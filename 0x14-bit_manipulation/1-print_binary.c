#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int start;
	unsigned long int bit;

	start = 0;
	bit = 1;
	bit <<= sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
		_putchar('0');

	while (bit > 0)
	{
		if ((n & bit) != 0 || start)
		{
			_putchar((n & bit) != 0 ? '1' : '0');
			start = 1;
		}
		bit >>= 1;
	}
}
