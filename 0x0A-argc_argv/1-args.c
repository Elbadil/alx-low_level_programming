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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
