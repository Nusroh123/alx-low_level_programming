#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - creates a file.
 * @filename:  pointer
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int i = 0;

	fp = fopen("filename", "r");

	if (fp == NULL)
	{
		return (0);
	}
	for (i = 0; fgetc(fp) != EOF; i++)
	{
		_putchar(fgetc(fp));
		letters++;
		return (letters);
	}
	if (fp != fopen("filename", "r"))
		return (0);
	if (filename == NULL)
		return (0);
	if (fp != fopen("filename", "w"))
		return (0);
	return (letters);
}
