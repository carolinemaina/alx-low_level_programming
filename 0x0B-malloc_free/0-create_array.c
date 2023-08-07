#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the character array
 * @c: char to initialize all elements of the array
 * Return: NULL if size = 0, pointer to array, NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int a;

	ch = malloc(sizeof(char) * size);
	if (size == 0 || ch == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ch[a] = c;
	return (ch);
}
