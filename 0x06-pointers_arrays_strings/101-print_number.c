#include "main.h"

/**
 * print_number - Prints an integer as characters.
 * @n: The integer to be printed.
 *
 * Return: void
 */
void print_number(int n)
{
    unsigned int n1;

    n1 = (n < 0) ? -n : n;

    if (n < 0)
    {
	_putchar('-');
	n1 = -n;
    }

    if (n1 / 10 != 0)
    {
	print_number(n1 / 10);
    }
    _putchar((n1 % 10) + '0');
}
