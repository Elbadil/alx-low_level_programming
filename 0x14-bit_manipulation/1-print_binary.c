#include "main.h"
/**
 * print_binary - prints binary of a number
 * @n: number we are converting to binary
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i = 63, counter = 0;

	while (i >= 0)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
		i--;
	}
	if (!counter)
		_putchar('0');
}
