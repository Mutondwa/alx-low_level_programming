#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The input string.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    while (s[i] != '\0')
    {
	if (s[i] == c)
		return (&s[i]);
	i++;
    }
    return (0);
}
