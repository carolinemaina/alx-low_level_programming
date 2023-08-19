#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: parameters passed
 * @...: variable number of parameters to calculate
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list t_arg;
	unsigned int l, sum = 0;

	va_start(t_arg, n);

	for (l = 0; l < n; l++)
		sum += va_arg(t_arg, int);

	va_end(t_arg);

	return (sum);
}
