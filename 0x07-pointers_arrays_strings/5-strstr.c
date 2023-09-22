#include "main.h"

/**
 * _strstr - Locate a substring within a string.
 * @haystack: The input string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
	char *h = haystack;
	char *n = needle;

	while (*h == *n && *n != '\0')
	{
		h++;
		n++;
	}

	if (*n == '\0')
		return (haystack);
    }
    return (NULL);
}
