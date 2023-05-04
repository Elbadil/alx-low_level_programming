#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: Pointer to a number
 * @index: where we setting the value of a bit
 * Return: 1 if it worked, or -1 if it fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	else
	{
		*n = ((1UL << index) | *n);
		return (1);
	}
}
