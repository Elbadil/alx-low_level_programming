#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_num - To check if the characters of the string are numbers
 * @s: string
 * Return: Always 0 (success)
 */
int check_num(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (isdigit(s[n]) == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of character pointers that list all arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
