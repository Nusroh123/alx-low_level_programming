#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * return: Always 0
 */
void print_alphabet(void)
{
	char al;
	for (al = 'a'; al <= 'z'; al++ )
	{
		putchar(al);
		putchar('\n');
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
