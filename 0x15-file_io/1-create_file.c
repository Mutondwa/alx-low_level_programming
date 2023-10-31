#include "main.h"

/**
 * create_file – creates the file
 * @filename: pointer to file name to create
 * @text_content: pointer to string to write to file
 * Return: if function fails - -1
 * otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int xy, z, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	xy = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(xy, text_content, len);
	if (xy == -1 || z == -1)
		return (-1);

	close(xy);

	return (1);
}
