#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints \ according to digit input
 * @n : number of \ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	int l = 0, nl;

		while (l < n && n > 0)
		{
			nl = 0;
			while (nl < l)
			{
				_putchar(' ');
				l++;
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
		if (l == 0)
	
			_putchar('\n');

}
