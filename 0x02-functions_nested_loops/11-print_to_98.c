#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line
 * @n: Print from this number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (int i = n; i <= 98; i++)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        for (int j = n; j >= 98; j--)
        {
            printf("%d", j);
            if (j != 98)
                printf(", ");
        }
    }
    printf("\n");
}
