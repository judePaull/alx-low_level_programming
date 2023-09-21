#include <stdio.h>
#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: Array of integers.
 * @n: number of elements of the array.
 * Return: 0.
 */

void reverse_array(int *a, int n)
{
	int f = 0;
	int b = n - 1;
	int h;

	while (f < b)
	{
		h = a[f];
		a[f] = a[b];
		a[b] = h;

		f++;
		b--;
	}
}
