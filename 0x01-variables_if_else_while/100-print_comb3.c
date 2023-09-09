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

	for (j = '0'; j <= '8'; j++)
	{
		for (d = j + 1; d <= '9'; d++)
		{
			putchar(j + '0');
			putchar(d + '0');
			if (j != 8 || d != 9)
			{
			putchar(',');
		putchar(' ');
			}
		}	
	}
	putchar('\n');

	return (0);
}
