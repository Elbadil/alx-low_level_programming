#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of file we are appending text to it content
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
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

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	j = write(fp, text_content, i);
	if (j == -1)
		return (-1);

	close(fp);

	return (1);
}
