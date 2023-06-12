#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text prints it to a standard output.
 * @filename:  file read
 * @letters: number of letters/bytes
 * Return: the number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bs, w, x;
char *buf;

bs = open(filename, O_RDONLY);
if (bs == -1)
return (0);
buf = malloc(sizeof(char) * letters);
x = read(bs, buf, letters);
w = write(STDOUT_FILENO, buf, x);
free(buf);
close(bs);
return (w);
}
