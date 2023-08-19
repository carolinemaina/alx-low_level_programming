#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of strings
 * @...: variable number of strings to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
