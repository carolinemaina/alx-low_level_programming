#include "main.h"

int get_sqrt(int n, int square);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sqrt(n, 0));
}

/**
 * sqrt - recurses to find natural square
 * @n: number
 * @square: iterator
 * Return: square root
 */
int get_sqrt(int n, int square)
{
	if (square * square > n)
		return (-1);
	if (square * square == n)
		return (square);
	return (get_sqrt(n, square + 1));
}
