#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of a text file
 * @letters: size of letters to read
 * Return: Actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fp;
	ssize_t i;
	ssize_t j;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	i = read(fp, b, letters);
	j = write(STDOUT_FILENO, b, i);

	free(b);
	close(fp);
	return (j);
}
