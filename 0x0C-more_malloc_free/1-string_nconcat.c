#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings using bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 != NULL && s1[l1] != '\0')
		l1++;
	while (s1 != NULL && s2[l2] != '\0')
		l2++;

	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else

		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	while (j <= n && s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
