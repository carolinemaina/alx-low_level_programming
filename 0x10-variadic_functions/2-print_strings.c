#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of strings given
 * @...: variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int count;

	va_start(string, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(string, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
