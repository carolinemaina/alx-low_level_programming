#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to a null-terminated string for file to be read
 * @letters: maximum number of characters to read from the file
 * Return: 0 if file can not be opened or read, NULL, if
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdescript;
	char *buffer;
	ssize_t wr;
	ssize_t re;

	fdescript = open(filename, O_RDONLY);
	if (fdescript == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	re = read(fdescript, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	free(buffer);
	close(fdescript);
	return (wr);
}
