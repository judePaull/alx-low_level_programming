#include <stdio.h>

/**
* main - prints the alphabets.
* a program that prints the alphabet in lowercase & upper-case.
* Return: 0
*/
int main(void)
{
	char alpha;
	char upper_alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');
	return (0);
}
