#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be checked nd capitalized.
 * Return: 0
 */

char *cap_string(char *str)
{
	char separator[] = " \t;\n;,.!?\"(){}";
	int i, l, alpha;

	for (i = 0; str[i] != '\0'; i++)
	{
		alpha = 0;
		if (i == 0)
		{
			alpha = 1;
		}
		else
		{
		for (l = 0; separator[l] != '\0'; l++)
		{
			if (str[i - 1] == separator[l])
			{
				alpha = 1;
				break;
			}
		}
		}
		if (alpha == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
