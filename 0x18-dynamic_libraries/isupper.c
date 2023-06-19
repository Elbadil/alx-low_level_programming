#include "main.h"
/**
 * _isupper - Checking for uppercase character
 * @c: parameter for our character
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
