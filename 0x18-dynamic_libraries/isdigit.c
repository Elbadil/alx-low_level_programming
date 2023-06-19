#include "main.h"
/**
 * _isdigit - Check if the character is a digit
 * @c: parameter for character
 * Return: 1 is digit and 0 is not a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
