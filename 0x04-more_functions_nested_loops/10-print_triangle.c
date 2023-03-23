#include "main.h"
/**
 * print_triangle - To print triangles using #
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int b;
	int a;

	if (size > 0)
	{
		for (b = 1 ; b <= size ; b++)
		{
			for (a = b ; a <= size ; a++)
			{
				_putchar(' ');
			}
			for (a = 1 ; a <= b ; a++)
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
