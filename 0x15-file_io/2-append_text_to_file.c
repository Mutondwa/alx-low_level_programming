#include "main.h"

/**
 * append_to_text_file – appends text at the file end
 * @filename: pointer to file name
 * @text_content: pointer to string to add to the end of file
 * Return: if function fails 0r filename is NULL - -1
 * otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, z, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	z = write(p, text_content, len);
	if (p == -1 || z == -1)
		return (-1);

	close(p);

	return (1);
}
