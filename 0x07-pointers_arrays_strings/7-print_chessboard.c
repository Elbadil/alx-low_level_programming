#include "main.h"
/**
 * print_chessboard - To print chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int l;
	int n;

	for (l = 0 ; l < 8 ; l++)
	{
		for (n = 0 ; n < 8 ; n++)
		{
			_putchar(a[l][n]);
		}
		_putchar('\n');
	}
}
