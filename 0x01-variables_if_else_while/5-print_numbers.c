#include <stdio.h>

/**
* main - prints single digit numbers of base ten.
* a program single digit numbers of base 10, followed by a new lie.
* Return: 0
*/

int main(void)
{
	int sing_digit;

	for (sing_digit = 0; sing_digit <= 9; sing_digit++)
	{
		putchar('0'+ sing_digit);
	}
	putchar('\n');

	return (0);
}
