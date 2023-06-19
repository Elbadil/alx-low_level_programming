#include "main.h"
/**
 * _isalpha - Checking if its alpha
 * @c: parameter to be checked
 *
 * Return: always 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
