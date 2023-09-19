#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a : pointer to the array
 * @n : number of elements of an array
 * Return : Always 0.
 */

void print_array(int *a, int n)
{
	int ele;

	for  (ele = 0; ele < n; ele++)
	{
		if (ele != (n - 1))
		{
			printf("%d, ", a[ele]);
		}
		else
		{
			printf("%d", a[ele]);
		}
	}
	putchar('\n');
}
