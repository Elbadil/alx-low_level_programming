#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of character pointers that list all arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
