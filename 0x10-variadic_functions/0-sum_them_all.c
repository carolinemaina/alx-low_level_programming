#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: calculate sum of
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(par, n);

	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
