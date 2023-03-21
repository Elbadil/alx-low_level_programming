#include "main.h"
/**
 * print_last_digit - to print last digit
 * main - entry point
 * @n: our last digit
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
