#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the diagonals of a square matrix.
 * @a: The input square matrix.
 * @size: The size of the matrix.
 *
 * Return: No return value (void).
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0, sum2 = 0, y;

    for (y = 0; y < size; y++)
    {
	sum1 += a[y * size + y];
	sum2 += a[y * size + (size - y - 1)];
    }

    printf("%d, %d\n", sum1, sum2);
}
