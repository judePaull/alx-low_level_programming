#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fizz, buzz or fizzbuzz according to digit input.
 * Return: 0
 */

int main(void)

{
	int n = 1;
	{
		for (n = 1; n <= 100; n++)
		{
			if (n % 3 == 0)
			{
				printf("Fizz");
			}
			else if
				(n % 5 == 0)
				{
					printf("Buzz");
				}
			else if
				(n % 15 == 0)
				{
					printf("FizzBuzz");
				}
			else
			{
				printf("%d", n);
			}
		}
		putchar('\n');
	}
			return (0);
}
