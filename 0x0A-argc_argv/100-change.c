#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of character pointers that list all arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num, i, count;
	int coins[] = {25, 10, 5, 2, 1};

	num = atoi(argv[1]);
	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			count++;
			num -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
