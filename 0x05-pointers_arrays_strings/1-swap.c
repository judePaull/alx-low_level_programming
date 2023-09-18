#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a : First integer to be swapped
 * @b : second integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;

}
