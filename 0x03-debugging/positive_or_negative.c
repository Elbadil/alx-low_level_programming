#include "main.h"
/**
  * positive_or_negative - to see if the number positive or negative
  * Return: Always 0 (success)
  * @i: our integer
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
