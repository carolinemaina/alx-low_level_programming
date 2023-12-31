#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * File not created if it doesnt exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, l);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
