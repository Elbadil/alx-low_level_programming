#include <stdio.h>
/**
 * main - Entry code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int n;
	int j;

	for (c = 0 ; c < 10 ; c++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			for (j = 2 ; j < 10 ; j++)
			{
				if (c < n && n < j)
				{
					putchar(c + '0');
					putchar(n + '0');
					putchar(j + '0');
					if (c + n + j != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
