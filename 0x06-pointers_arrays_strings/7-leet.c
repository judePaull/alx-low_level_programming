#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded.
 * Return: 0
 */

char *leet(char *str)
{
	int l;
	int j;
	char r[] = "aAeEoOtTlL";
	char r_w[] = "4433007711";

	for (l = 0; str[l] != '\0'; l++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (str[l] == r[j])
			{
				str[l] = r_w[j];
			}
		}
	}
	return (str);
}
