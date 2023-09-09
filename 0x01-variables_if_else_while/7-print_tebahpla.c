#include <stdio.h>

/**
* main - prints the alphabet in reverse in lower-case.
* a program that prints the reversed alphabet in lowercase and a new line.
* Return: 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
