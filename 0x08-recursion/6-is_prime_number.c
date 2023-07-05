#include "main.h"

int _prime(int n, int p);
/**
 * is_prime_number - shows if number is a prime
 * @n: given input number
 * Return: 1 if a prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - calulate if prime number
 * @n: given number
 * @p: iterate
 * Return: 1 if prime & 0 if not
 */
int _prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (_prime(n, p - 1));
}
