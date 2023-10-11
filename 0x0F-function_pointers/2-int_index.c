#include "function_pointers.h"

/**
 * int_index - returns the index where comparison function returns true
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function that returns a boolean value
 * Return: Index of the first element for which cmp returns true, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

    for (i = 0; i < size; i++)
    {
	if (cmp(array[i]))
		return (i);
    }

    return (-1);
}
