#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer
 * Return: String in Capital.
 */

char *string_toupper(char *str)
{
	int w;

	w = 0;
	while (str[w] != '\0')
	{
		if (str[w] <= 122 && str[w] >= 97)
		{
			str[w] = str[w] - (97 - 65);
		}
		w++;
	}

	return (str);
}
