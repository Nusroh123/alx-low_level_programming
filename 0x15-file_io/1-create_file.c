#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDesc == -1)
		return (-1);

	if (text_content == NULL && fileDesc != -1)
	{
		if (fchmod(fileDesc, 00600) == -1)
		{
			close(fileDesc);
			return (-1);
		}
	}

	if (text_content != NULL)
	{
		len = write(fileDesc, text_content, strlen(text_content));
		if (len == -1)
		{
			close(fileDesc);
			return (-1);
		}
	}
	close(fileDesc);
	return (1);
}
