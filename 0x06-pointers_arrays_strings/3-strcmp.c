#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: The difference between the ASCII values of the first differing characters,
 *         0 if the strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    }
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	i++;
    }
    return (s1[i] - s2[i]);
}
