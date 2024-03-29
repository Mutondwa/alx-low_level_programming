#include "main.h"

/**
 * _isdigit - Check if a character is a digit (0-9)
 * @c: The character to check
 * Return: 1 if it's a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
