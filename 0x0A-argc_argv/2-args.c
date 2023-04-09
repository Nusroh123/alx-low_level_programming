#include <stdio.h>
#include "main.h"

/**
 * main - prints aii the argument it received
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
