#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 *@argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
			printf("argv[%d] = %s\n", count, argv[count]);
	}
	else
		printf("No argument received\n");
	return (0);
}
