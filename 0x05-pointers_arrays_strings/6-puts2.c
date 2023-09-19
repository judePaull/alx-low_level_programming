#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str : string to be printed
 * Return : Always 0
 */

void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l += 2;
	}
	_putchar('\n');
}
