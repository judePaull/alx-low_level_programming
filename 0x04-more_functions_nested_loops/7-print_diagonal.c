#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints \ according to digit input
 * @n : number of \ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	int l = 0, ll;

	while (l < n && n > 0)
	{
		ll = 0;
		while (ll < l)
		{
			_putchar(' ');
			ll++;
		}

		_putchar('\\');
		_putchar('\n');
		l++;

	}
	if (l == 0)

		_putchar('\n');

}
