#include "main.h"
/**
 * print_square - To print squares
 * @size: the size of the square
 */
void print_square(int size)
{
	int d;
	int b;

	if (size > 0)
	{
		for (d = 1 ; d <= size ; d++)
		{
			for (b = 1 ; b <= size ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
