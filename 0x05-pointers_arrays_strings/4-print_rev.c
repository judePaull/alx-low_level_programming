#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s : String to be reversed.
 * Return : Always 0.
 */

void print_rev(char *s)
{
	int l;
	int rev;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (rev = l - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
