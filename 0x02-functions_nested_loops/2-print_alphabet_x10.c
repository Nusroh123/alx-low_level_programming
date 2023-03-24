#include "main.h"

/**
 * main - Entry point
 * Descrition: function print_alphabet_x10
 * @parameter: void
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
