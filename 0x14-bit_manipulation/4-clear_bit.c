#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to a number
 * @index: where we setting the value of a bit to 0
 * Return: 1 if it worked, or -1 if it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}
}
