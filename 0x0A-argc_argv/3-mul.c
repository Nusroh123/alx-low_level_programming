#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 but 1 if argc is not equal to 3
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	r = a * b;

	printf("%d\n", r);
	return (0);
}
