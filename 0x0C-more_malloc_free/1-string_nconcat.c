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
	unsigned int i, j, l1, l2;

	l1 = 0;
	while (s1 != NULL && s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2 != NULL && s2[l2] != '\0')
		l2++;

	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (n < l2 && i < (l1 + n))
		s[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
