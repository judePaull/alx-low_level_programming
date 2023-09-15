#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14, 10 times.
 * Return:void
 */

void more_numbers(void)
{
	char m, n;

	int l;

	while(l < 10)
	{
		for (m = 0; m <= 14; m++)
		{
			n = m;
			if (m > 9)
			{
			_putchar('1');
			n = m % 10;
			}
			_putchar('0' + n);
		}
		_putchar('\n');
		l++;
	}
}

