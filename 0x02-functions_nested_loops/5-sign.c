#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The integer to check
 *
 * Return: 1 if n is greater than zero, -1 if n is less than zero, 0 if n is zero.
 * And prints '+' if n is greater than zero, '-' if n is less than zero, and '0' if n is zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    else
    {
        _putchar('-');
        return (-1);
    }
}
