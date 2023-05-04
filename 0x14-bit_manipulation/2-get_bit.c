#include "main.h"
/**
 * get_bit - Gets bit value at a given index
 * @n: number
 * @index: where we are getting bit value
 * Return: Value of bit at index, or -1 if it fails
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int value = 0;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		value = (n >> index) & 1;
	}
	return (value);
}
