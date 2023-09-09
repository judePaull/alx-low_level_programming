#include <stdio.h>

/**
* main - prints the alphabet in lower-case.
* a program that prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/

int main(void)
{
	int sing_digit;

	for (sing_digit = 0; sing_digit <= 9; sing_digit++)
	{
		putchar('0' + sing_digit);
	}
	putchar('\n');

	return (0);
}
