#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: Pointer to the input string.
 *
 * Return: A pointer to the modified string (s).
 */
char *rot13(char *s)
{
    int i, j;
    char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
	for (j = 0; j < 52; j++)
	{
		if (s[i] == data1[j])
		{
			s[i] = datarot[j];
			break;
		}
	}
    }
    return (s);
}
