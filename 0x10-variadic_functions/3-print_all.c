#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list any;

	va_start(any, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(any, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(any, double));
					break;
				case 's':
					s = va_arg(any, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(any);
}
