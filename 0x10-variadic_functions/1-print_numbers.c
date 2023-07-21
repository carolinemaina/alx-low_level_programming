#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to separate numbers
 * @n: number of integers
 * @...: variable of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int count;

	va_start(num, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(num, int));

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
