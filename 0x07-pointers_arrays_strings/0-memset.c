#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value.
 * @s: Starting address of memory to be filled.
 * @b: The desired value.
 * @n: Number of bytes to be changed.
 *
 * Return: A pointer to the changed array.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
	s[i] = b;
    }
    return (s);
}
