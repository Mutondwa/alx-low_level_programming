#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string contains only digits
 * @str: input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int count = 0;
    while (count < strlen(str))
    {
	if (!isdigit(str[count]))
	{
		return (0);
	}
	count++;
    }
    return (1);
}

/**
 * main - Print the sum of command line arguments if they are valid integers
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc)
    {
	if (check_num(argv[count]))
	{
		str_to_int = atoi(argv[count]);
		sum += str_to_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
    }
    printf("%d\n", sum);

    return (0);
}
