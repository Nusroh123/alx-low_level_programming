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
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

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
