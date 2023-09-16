#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints # as a triangle according to digit inputted.
 * @size : number of n to be printed
 * Return:void
 */

void print_triangle(int size)
{
	int l = 1, ll;

	while (l <= size && size > 0)
	{
		ll = 0;
		while (ll < size - l)
		{
			_putchar(' ');
			ll++;
		}
		ll = 0;
		while (ll < l)
		{
			_putchar('#');
			ll++;
		}
		_putchar('\n');
		l++;
	}

	if (l == 1)

		_putchar('\n');

}
