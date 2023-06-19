#include "main.h"
/**
 * _islower - print lowercase char
 * @c: parameter to be printed
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) /*ASCII DECIMAL REFERENCE TO 'a' AND 'z' */
		return (1);
	else
		return (0);
}
