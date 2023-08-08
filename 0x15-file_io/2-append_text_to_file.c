#include "main.h"

/**
 * append_text_to_file - add text to a file starting from the end
 * of the file
 * @filename: name of the file
 * @text_content:  the NULL terminated string to add at the end
 *  of the file
 *  Return: 1 if the file exist or -1 if it doesn't
 *  or don't have the required permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc;
	size_t i;
	ssize_t len, contentWrite;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;

		for (i = 0; text_content[i] != '\0'; i++)
		{
			if (text_content[i] == '\n')
			{
				close(fileDesc);
				return (-1);
			}
		}

		contentWrite = write(fileDesc, text_content, len);
		if (contentWrite == -1)
		{
			close(fileDesc);
			return (-1);
		}
	}

	close(fileDesc);
	return (1);
}
