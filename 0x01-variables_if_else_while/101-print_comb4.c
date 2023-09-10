#include <stdio.h>

/**
* main - prints all possible different combinations of two digits.
* a program prints different combinations of two digits and a new lie.
* Return: 0
*/

int main(void)
{
	int j;
	int d;
	int n;

	for (j = 0; j <= 7; j++)
	{
		for (d = j + 1; d <= 8; d++)
		{
			for (n = d + 1; n <= 9; n++)
			{
			putchar(j + '0');
			putchar(d + '0');
			putchar(n + '0');
			if (j != 7 || d != 8 || n != 9)
			{
			putchar(',');
		putchar(' ');
			}
			}
		}
	}
	putchar('\n');

	return (0);
}
