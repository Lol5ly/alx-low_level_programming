#include "main.h"

/**
 * append_text_to_file - appends text to file.
 * @filename: the name of the file.
 * @text_content: The string to text to write.
 *
 * Return: If the function fails - -1 otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, y, temp = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (temp = 0; text_content[temp];)
			temp++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	y = write(o, text_content, temp);

	if (o == -1 || y == -1)
		return (-1);

	close(o);

	return (1);
}
