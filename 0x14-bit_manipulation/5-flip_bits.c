#include "main.h"
/**
 * flip_bits - Gives the number of bits to flip
 * @n: first unsigned number
 * @m: second unsigned number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num1;
	unsigned long int num2 = n ^ m;
	int i = 63, counter = 0;

	while (i >= 0)
	{
		num1 = num2 >> i;
		if (num1 & 1)
		{
			counter++;
		}
		i--;
	}
	return (counter);
}
