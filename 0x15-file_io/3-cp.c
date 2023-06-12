#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
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
 * main - Copies the contents of a file to another.
 * @argc1: The number of arguments.
 * @argv2: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist - exit code 98.
 * If file_to cannot be created - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc1, char *argv2[])
{
	int from, op, R, p;
	char *buffer;

	if (argc1 != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv2[2]);
	from = open(argv2[1], O_RDONLY);
	R = read(from, buffer, 1024);
	op = open(argv2[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv2[1]);
			free(buffer);
			exit(98);
		}

		p = write(op, buffer, R);
		if (op == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv2[2]);
			free(buffer);
			exit(99);
		}

		R = read(from, buffer, 1024);
		op = open(argv2[2], O_WRONLY | O_APPEND);

	} while (R > 0);

	free(buffer);
	close_file(from);
	close_file(op);

	return (0);
}
