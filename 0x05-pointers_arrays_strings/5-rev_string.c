#include "main.h"
/**
 * rev_string - To reverse a string
 * @s: String parameter
 */
void rev_string(char *s)
{
	int i;
	int r;
	char b;

	for (i = 0 ; s[i] != '\0' ;)
	{
		i++;
	}
	for (r = 0 ; r < i ; r++)
	{
		i--;
		b = s[r];
		s[r] = s[i];
		s[i] = b;
	}
}
