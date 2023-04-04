#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - To print the sum of two diagonals of a square matric of integers 
 * @a: start of the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c;
	int d;
	int e;
	int f;

	e = 0;
	f = 0;
	for (b = 0 ; b < size ; b++)
	{
		d = (b * size) + b;
		e += *(a + d);
	}
	for (c = 0 ; c < size ; c++)
	{
		d = (c * size) + (size - 1 - c);
		f += *(a + d);
	}
	printf("%i, %i\n", e, f);
}
