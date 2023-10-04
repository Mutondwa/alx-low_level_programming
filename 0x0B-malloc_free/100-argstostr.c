#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of command-line arguments
 * @av: array of command-line arguments
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int i, j, k = 0, len = 0;
    char *str;

    if (ac == 0 || av == NULL)
	return (NULL);

    for (i = 0; i < ac; i++)
    {
	for (j = 0; av[i][j]; j++)
	len++;
    }

    len += ac + 1;

    str = malloc(sizeof(char) * len);

    if (str == NULL)
	return (NULL);

    for (i = 0; i < ac; i++)
    {
	for (j = 0; av[i][j]; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	str[k] = '\n';
	k++;
    }

    str[k] = '\0';

    return (str);
}
