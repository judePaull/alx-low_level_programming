#include <stdio.h>
#include "main.h"

/**
 *print_number - prints an integer.
 *@n: given integer.
 *Return: 0
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if
	       (n > 0)
	{
		       _putchar('0' + n);
	}
	else if
		(n < 0)
		{
			_putchar('-');
			n = -n;
		}

	putchar('\n');
}
