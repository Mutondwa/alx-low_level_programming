#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *duplicate;
    int i, length = 0;

    if (str == NULL)
	return (NULL);

    while (str[length] != '\0')
	length++;

    duplicate = malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
	return (NULL);

    for (i = 0; i <= length; i++)
	duplicate[i] = str[i];

    return (duplicate);
}
