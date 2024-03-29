#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
    int i = 0;
    int n = 0;
    int sign = 1;

    while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
    {
	i++;
    }

    if (s[i] == '-')
    {
	sign = -1;
	i++;
    }
    else if (s[i] == '+')
    {
	i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
	n = n * 10 + (s[i] - '0');
	i++;
    }
    return (n * sign);
}
