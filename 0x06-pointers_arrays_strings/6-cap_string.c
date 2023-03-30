#include "main.h"
/**
 * cap_string - To capitalize words of string
 * @s: The strinf to be capitalized
 * Return: The changed string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char a[] = " \t\n,;.!?\"(){}";

	i  = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == s[i - 1])
						s[i] -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
