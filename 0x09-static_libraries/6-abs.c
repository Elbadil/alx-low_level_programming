#include "main.h"
/**
 * _abs - to print the absulote value (positive number if its negative)
 * @n: parameter
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
