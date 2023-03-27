#include "main.h"
/**
 * swap_int - Function to swap two integers
 * @a: Our first Integer
 * @b: Our second Integer
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
