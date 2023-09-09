#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints a random number to the n variable.
* program will assign a random number to the variable n each time it is executed.
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is psitive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
