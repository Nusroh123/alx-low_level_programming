#include "main.h"

/**
 * print_diagonal - Draws a diagonal lineon the terminal
 * @n: number of \ to be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for  (j = 0; j < i; j++)
			{
				_putchar(' ');	
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
