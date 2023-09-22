#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to the input string.
 *
 * Return: A pointer to the modified string (str).
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
	if (str[index] >= 'a' && str[index] <= 'z')
	{
		if (index == 0 ||
		str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}')
		{
		str[index] -= 32;
		}
	}
	index++;
    }
    return (str);
}
