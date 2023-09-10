#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers.
* Return: 0
*/

int main(void)
{
	int j;
	int n;

	for (j = 0; j <= 99; j++)
	{
		for (j = 0; n <= 99; n++)
		{
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (j != 99 || n != 99)
			{
			putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
