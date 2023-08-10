#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename:the name of the file provided
 * @letters: letters that the text has
 * Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int Fd, amount;
	char *txt = malloc(sizeof(char) * letters);

	if (txt == NULL || filename == NULL)
	{
		return (0);
	}

	Fd = open(filename, O_RDONLY);
	if (Fd == -1)
	{
		return (0);
	}

	amount = read(Fd, txt, letters);
	txt[letters + 1] = '\0';

	write(STDOUT_FILENO, txt, amount);

	free(txt);
	closed(Fd);
	return (amount);
}
