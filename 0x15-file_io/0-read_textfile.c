#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of char
 * Return: something
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t b_read;
	ssize_t b_wrt;

	file = open(filename, O_RDONLY);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	b_read = read(file, buffer, letters);
	b_wrt = write(STDOUT_FILENO, buffer, b_read);

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	if (b_read <= 0)
	{
		close(file);
		free(buffer);
		return (0);
	}

	if (b_wrt != b_read)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (b_wrt);
}
