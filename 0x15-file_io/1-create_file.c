#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fdescript, wr, txt_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (txt_len = 0; text_content[txt_len];)
			txt_len++;
	}

	fdescript = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fdescript, text_content, txt_len);

	if (fdescript == -1 || wr == -1)
		return (-1);

	close(fdescript);

	return (1);
}
