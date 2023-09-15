#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 & 4
 * Return:0
 */

void print_most_numbers(void)
{
	char m = 0;

	while (m <= 9)
	{
		if (m != 2 && m != 4)
		{
			_putchar('0' + m);
		}

		m++;
	}
	_putchar('\n');

}
