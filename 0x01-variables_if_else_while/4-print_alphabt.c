#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
