#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers.
* a program displays all combinations of single-digit numbers and a new lie.
* Return: 0
*/

int main(void)

{
	int combi;

	for (combi = 0; combi <= 9; combi++)
		if (combi != 8)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');

	return (0);
}
