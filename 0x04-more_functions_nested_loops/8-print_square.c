#include <stdio.h>
#include "main.h"

/**
 * print_square - prints # as a according to digit inputted.
 * @size : number of n to be printed
 * Return:void
 */

void print_square(int size)
{
	int l = 0, ll;

	while (l < size && size > 0)
	{
		ll = 0;
		while (ll < size)
		{
			_putchar('#');
				ll++;
		}
		_putchar('\n');
		l++;
	}
	if (l == 0)
		_putchar('\n');
}
