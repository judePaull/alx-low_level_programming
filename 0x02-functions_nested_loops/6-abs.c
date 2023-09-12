#include <stdio.h>
#include "main.h"

/**
* _abs - computes the absolute value of an integer.
* @n : inputed number to find its value.
* Return: 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
