#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file pint to STDOUT
 * @filename: read file text
 * @letters: read letters number
 * Return: w- actual bytes number read and printed
 * 0 whenn function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t xy;
	ssize_t z;
	ssize_t c;

	xy = open(filename, O_RDONLY);
	if (xy == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	c = read(xy, buffer, letters);
	z = write(STDOUT_FILENO, buffer, c);

	free(buffer);
	close(xy);
	return (z);
}
