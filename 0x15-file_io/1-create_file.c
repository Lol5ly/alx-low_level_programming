#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to be created.
 * @text_content: a string to write the file.
 *
 * Return: If the function fails - -1. Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, l);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
