#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			putchar('\0');
		else
			putchar(c);
	}
	/*putchar('\n');*/
	return (0);
}
