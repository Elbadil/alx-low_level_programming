#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: String of characters
 * Return: Converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bin = 2 * bin + (b[i] - '0');
		i++;
	}
	return (bin);
}
