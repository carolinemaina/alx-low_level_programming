#include "main.h"

int sqr(int n, int s);
/**
 * _sqrt_recursion - natural square root of a number
 * @n: given input
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - calculate natural square
 * @n: given input
 * @s: iterate
 * Return: natural sqaure root
 */
int sqr(int n, int s)
{
	int num = s * s;

	if (num > n)
		return (-1);
	if (num == n)
		return (s);
	return (sqr(n, s + 1));
}
