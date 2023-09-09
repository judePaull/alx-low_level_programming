#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercas.
* a program that prints all the numbers of base 16 in lowercas and a new lie.
* Return: 0
*/

int main(void)
{
	int dec;
	char hex;

	for (dec = 0; dec <= 9; dec++)
	{
		putchar(dec);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
