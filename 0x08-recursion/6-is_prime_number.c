#include "main.h"
/**
 * check_prm - check if number is prime
 * @i: int
 * @j: int
 * Return: int
 */
int check_prm(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (i > j / 2)
	{
		return (1);
	}
	else
	{
		return (check_prm(i + 1, j));
	}
}

/**
 * is_prime_number - check if the given number is prime
 * @n: given number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_prm(2, n));
	}
}
