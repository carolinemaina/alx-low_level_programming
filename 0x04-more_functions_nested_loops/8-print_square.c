#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: a square or 0
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
