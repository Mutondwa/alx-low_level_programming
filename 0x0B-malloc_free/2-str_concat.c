#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i, j, k;

    if (s1 == NULL)
	s1 = "";
    if (s2 == NULL)
	s2 = "";

    i = j = k = 0;
    while (s1[i] != '\0')
	i++;
    while (s2[j] != '\0')
	j++;

    concat = malloc(sizeof(char) * (i + j + 1));

    if (concat == NULL)
	return (NULL);

    for (k = 0; k < i; k++)
	concat[k] = s1[k];
    for (j = 0; j < (i + j); j++, k++)
	concat[k] = s2[j];

    concat[k] = '\0';
    return (concat);
}
