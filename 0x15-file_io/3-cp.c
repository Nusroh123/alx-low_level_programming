#include "main.h"

/**
 * handleError - print error message
 * @message: information about the error
 * @exitCode: exit program wit it
 * Return: nothing
 */
void handleError(const char *message, int exitCode)
{
	fprintf(stderr, "%s\n", message);
	exit(exitCode);
}

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	const char *file_from, *file_to;
	int srcFileDesc, destFileDesc;
	char buf[1024];
	ssize_t bRead;

	file_from = av[1];
	file_to = av[2];
	if (ac != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", av[0]);
		return (97);
	}

	srcFileDesc = open(file_from, O_RDONLY);
	if (srcFileDesc == -1)
	{
		fprintf(stderr, "Error: Can't read from %s\n", av[1]);
		return (98);
	}

	destFileDesc = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destFileDesc == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		close(srcFileDesc);
		return (99);
	}

	while ((bRead = read(srcFileDesc, buf, sizeof(buf))) > 0)
	{
		if (write(destFileDesc, buf, bRead) == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", file_to);
			close(srcFileDesc);
			close(destFileDesc);
			return (99);
		}
	}
	if (bRead == -1)
	{
		fprintf(stderr, "Error reading from %s: %s\n", file_from, strerror(errno));
		close(srcFileDesc);
		close(destFileDesc);
		return (98);
	}
	if (close(srcFileDesc) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", srcFileDesc);
		close(destFileDesc);
		return (100);
	}
	if (close(destFileDesc) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", destFileDesc);
		return (100);
	}

	if (chmod(file_to, 0664) == -1)
	{
		fprintf(stderr, "Error: Can't set permissios for %s\n", file_to);
		return (100);
	}

	return (0);

}
