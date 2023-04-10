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
	int num = atoi(argv[1]), i, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
