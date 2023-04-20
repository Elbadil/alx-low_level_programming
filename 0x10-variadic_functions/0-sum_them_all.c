#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculate the sum of all it's parameters
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);

	return (sum);
}
