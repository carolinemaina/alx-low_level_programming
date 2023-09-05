#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: document after copying
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	re = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(file_to, buffer, re);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		re = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	free(buffer);
	close_f(file_from, argv[1]);
	close_f(file_to, argv[2]);

	return (0);
}

/**
 * close_f - closes a specified file
 * @fd: file descriptor
 * @filename: name of file
 * Return: Nothing
 */
void close_f(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %s\n", filename);
		exit(100);
	}
}

/**
 * buff - allocates 1024 bytes for buffer
 * @f: file buffer is storing in
 * Return: pointer to buffer
 */

char *buff(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buffer);
}
