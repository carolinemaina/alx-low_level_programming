#include "main.h"

int calc_prime(int n, int p);

/**
 * is_prime_number - determine if prime
 * @n: number
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc_prime(n, n - 1));
}

/**
 * calc_prime - finds if prime recursively
 * @n: number
 * @p: iterator
 * Return: 1 if prime
 */
int calc_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 1)
		return (0);
	return (calc_prime(n, p - 1));
}
