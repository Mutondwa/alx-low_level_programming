#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * If the length of the string is odd, it prints from (length + 1) / 2 to the end.
 * If the length is even, it prints from length / 2 to the end.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
    int length = 0;
    int start, i;

    while (str[length] != '\0')
    {
	length++;
    }

    if (length % 2 == 0)
    {
	start = length / 2;
    }
    else
    {
	start = (length + 1) / 2;
    }

    for (i = start; i < length; i++)
    {
	_putchar(str[i]);
    }
    _putchar('\n');
}
