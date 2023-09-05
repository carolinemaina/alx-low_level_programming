#include "main.h"

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
