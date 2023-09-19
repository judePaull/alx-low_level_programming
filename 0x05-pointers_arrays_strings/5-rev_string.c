#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s : the string to be reversed.
 * Return : Always 0.
 */

void rev_string(char *s)
{
	int l, b, e;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	;
	b = 0;

	e = l / 2;

		while (e--)
		{
			temp = s[l - b - 1];
			s[l - b - 1] = s[b];
			s[b] = temp;
			b++;
		}
}
