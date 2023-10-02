#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: total arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buff_mem(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (re > 0)
	{
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buff);
	fd_close(from);
	fd_close(to);

	return (0);
}

/**
 * buff_mem - allocates memory and returns pointer to memory
 * @filename: name of file
 * Return: pointer to allocated memory
 */
char *buff_mem(char *filename)
{
	char *address;

	address = malloc(sizeof(char) * 1024);

	if (address == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (address);
}

/**
 * fd_close - close a file descriptor
 * @fd: file descriptor
 */
void fd_close(int fd)
{
	int clos;

	clos = close(fd);

	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
