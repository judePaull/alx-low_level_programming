#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : string to be printed from.
 * Return : Always 0
 */

void puts_half(char *str)
{
	int l, half, n;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	half = l - 1;
	n = (half / 2) + 1;
	for (; n <= half; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
