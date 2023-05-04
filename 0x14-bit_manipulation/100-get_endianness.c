#include "main.h"
/**
 * get_endianness - checks the endiannes
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *s;

	s = (char *) &n;

	return (*s);
}
