#include "main.h"

/**
 * more_numbers - Print a line of underscores based on n
 * @n: Number of underscores to print
 */
void more_numbers(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i;

        for (i = 1; i <= n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');
    }
}
