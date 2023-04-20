#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints number followed by a new line
 * @separator: seperates numbers with comma and  space
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i, b;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		b = va_arg(pr, int);
		printf("%d", b);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(pr);
}
