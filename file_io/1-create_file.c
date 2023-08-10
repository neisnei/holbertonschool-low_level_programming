#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file provided
 * @text_content: letters that the text has
 * Return: Always 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
		close(fd);
	}
	return (1);
}
