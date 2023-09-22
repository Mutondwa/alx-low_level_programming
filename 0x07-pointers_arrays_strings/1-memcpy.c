#include "main.h"

/**
 * _memcpy - Copy memory area from src to dest.
 * @dest: Destination memory where data is copied.
 * @src: Source memory to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
	dest[i] = src[i];
    }
    return (dest);
}
