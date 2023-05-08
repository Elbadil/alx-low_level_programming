#include "main.h"
/**
 * create_file - Creates file
 * @filename: name of file to be created
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fp;
	int j;
	int i = 0;

	if (filename == NULL)
	return (-1);

	if (text_content)
	{
		while (text_content[i])
		i++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	j = write(fp, text_content, i);
	if (j == -1)
		return (-1);

	close(fp);

	return (1);
}
