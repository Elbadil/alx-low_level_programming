#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int j;

	for (n = '0' ; n <= '9' ; n++)
	{
		for (j = '1' ; j <= '9' ; j++)
		{
			if (n < j && n != j)
			{
				putchar(n);
				putchar(j);
				if (n + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
