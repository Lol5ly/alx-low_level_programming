#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A name of the file to be created.
 * @text_content: string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int p, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(p, text_content, len);

	if (p == -1 || x == -1)
		return (-1);

	close(p);

	return (1);
}
