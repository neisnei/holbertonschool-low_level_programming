#include "main.h"

/**
 * main - copies the content of file to another file
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: number
 */

int main(int argc, char *argv[])
{
	int fd_f, fd_t, c1, c2;
	char *file_f = argv[1];
	char *file_t = argv[2];
	char *buff[1024];

	if (argc != 3)
		argc_fail();

	fd_f = open(file_f, O_RDONLY);
	if (fd_f == -1 || file_f == NULL)
		error_and_exit("Can't read from file", file_f, 98);

	fd_t = open(file_t, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_t == -1 || file_t == NULL)
		error_and_exit("Can't write to", file_t, 99);

	while (1)
	{
		c1 = read(fd_f, buff, 1024);
		if (c1 == 0)
			break;
		if (c1 == -1)
			error_and_exit("Can't read from file", file_f, 98);

		c2 = write(fd_t, buff, c1);
		if (c2 == -1)
			error_and_exit("Can't write to", file_t, 99);
	}

	if (close(fd_f) == -1)
		error_and_exit("Can't close fd", file_f, 100);

	if (close(fd_t) == -1)
		error_and_exit("Can't close fd", file_t, 100);

	return (0);
}

/**
 * argc_fail - fucntion to help with checking for error
 */

void argc_fail(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_and_exit - function to help with errors
 * @message: message to add
 * @filename: filename
 * @exit_code: exit code of the error
 */

void error_and_exit(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(exit_code);
}
