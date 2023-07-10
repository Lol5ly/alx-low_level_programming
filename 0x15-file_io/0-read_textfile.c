#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- That reads the text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters being read
 * Return: 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t x;
	ssize_t w;
	ssize_t p;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	p = read(x, buf, letters);
	w = write(STDOUT_FILENO, buf, p);

	free(buf);
	close(x);
	return (w);
}
