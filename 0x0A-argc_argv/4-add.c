#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num_count, add, i;

	if (argc > 1)
	{
		for (num_count = 1; num_count < argc; num_count++)
		{
			for (i = 0; argv[num_count][i] != '\0'; i++)
			{
				if (!isdigit(argv[num_count][i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[num_count]);
		}
		printf("%d\n", add);
	}
	if (argc <= 1)
		printf("0\n");

	return (0);
}
