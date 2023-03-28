#include "main.h"

/**
 * puts2 - a function that prints a string element on a new line
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
