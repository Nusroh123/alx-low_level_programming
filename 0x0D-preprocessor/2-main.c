#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 for success
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (0);
}
