#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: text
 * Return: 1 or-1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	fd = fopen(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		w = fwrite(fd, text_content, len);
		if (w != len)
			return (-1);
	}
	fclose(fd);
	return (1);
}

