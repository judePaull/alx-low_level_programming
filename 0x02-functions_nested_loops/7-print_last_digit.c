#include "main.h"

/**
 * print_last_digit - rints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int nl;

	if (n < 0)
		nl = -1 * (n % 10);
	else
		nl = n % 10;

	_putchar(nl + '0');

	return (nl);
}
