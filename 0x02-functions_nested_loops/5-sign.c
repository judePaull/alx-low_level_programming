#include <stdio.h>
#include "main.h"

/**
* print_sign - Checks a numbers compared to zero and prints a sign.
* @n : inputed number to be checked.
* Return: 0
*/

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = +1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else 
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
