#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers.
* a program displays all combinations of single-digit numbers and a new lie.
* Return: 0
*/

int main(void)

{
	int first;
	int secnd;

	for (first = '0'; first <= '9'; first++)
		for (secnd = '0'; secnd <= '9'; secnd++)
		{
			putchar(first + '0');
			putchar(',');
			putchar(secnd + '0');
		}
	putchar('\n');

	return (0);
}
