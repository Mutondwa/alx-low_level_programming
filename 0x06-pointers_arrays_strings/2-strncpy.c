#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
    int j = 0;

    while (j < n && src[j] != '\0')
    {	dest[j] = src[j];
	j++;
    }
    while (j < n)
    {
	dest[j] = '\0';
	j++;
    }
    return (dest);
}
