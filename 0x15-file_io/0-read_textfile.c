#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 *  the POSIX standard output.
 *  @filename: name of file
 *  @letters: number of letters it should read and print
 *  Return: number of letters 0r 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc;
	char *buffer;
	ssize_t bufRead, bufWrite;

	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fileDesc);
		return (0);
	}

	bufRead = read(fileDesc, buffer, letters);
	if (bufRead <= 0)
	{
		close(fileDesc);
		free(buffer);
		return (0);
	}

	buffer[bufRead] = '\0';

	bufWrite = write(STDOUT_FILENO, buffer, bufRead);
	if (bufWrite != bufRead)
	{
		close(fileDesc);
		free(buffer);
		return (0);
	}

	close(fileDesc);
	free(buffer);
	return (bufRead);
}
