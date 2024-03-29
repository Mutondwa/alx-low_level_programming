#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 *        followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int j = 1, k = 2, next, sum = 0;

    for (int i = 1; i <= 33; ++i)
    {
        if (j < 4000000 && (j % 2) == 0)
        {
            sum += j;
        }
        next = j + k;
        j = k;
        k = next;
    }

    printf("%lu\n", sum);

    return (0);
}
