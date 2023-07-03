#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: Always 0 (Succes)
 */
void print_chessboard(char (*a)[8])
{
	int width;
	int length;

	for (width = 0; width < 8; width++)
	{
		for (length = 0; length < 8; length++)
			_putchar(a[width][length]);
		_putchar('\n');
	}

}
