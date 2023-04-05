#include "main.h"
/**
 * check_sqrt - check for square root
 * @i: int
 * @j: int
 * Return: int
 */
int check_sqrt(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (check_sqrt(i + 1, j));
	}
}

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (check_sqrt(1, n));
	}
}
