#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 0;

	for (a = '0'; a <= '252'; a++)
	{
		putchar("%x", a);
	}
	putchar('\n');
	return (0);
}
