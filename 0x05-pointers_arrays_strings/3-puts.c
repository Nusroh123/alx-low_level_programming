#include "main.h"
#include <stdio.h>

/**
 * _puts - function use to print string
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
