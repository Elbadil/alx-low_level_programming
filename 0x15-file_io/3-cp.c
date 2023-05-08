#include "main.h"
/**
 * init_buffer - Initialize a buffer with 1024 bytes
 * @filename: name of file
 * Return: Pointer to the new buffer
 */
char *init_buffer(char *filename)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (b);
}

/**
 * close_fd - Closes fdescriptor
 * @fd: File descriptor
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point (Copies content of a file to another file)
 * @argc: number of arguments
 * @argv: Array of pointers to the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *b;
	int fpf, fpt, i, j;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = init_buffer(argv[2]);
	fpf = open(argv[1], O_RDONLY);
	i = read(fpf, b, 1024);
	fpt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fpf == -1 || i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		j = write(fpt, b, i);
		if (fpt == -1 || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		i = read(fpf, b, 1024);
		fpt = open(argv[2], O_WRONLY | O_APPEND);
	} while (i < 0);

	free(b);
	close_fd(fpf);
	close_fd(fpt);

	return (0);
}
