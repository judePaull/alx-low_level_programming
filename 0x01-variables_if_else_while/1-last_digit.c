#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints a random number to the n variable.
* program will assign a random number to the variable n when it is executed.
* Return: 0
*/

int main(void)
{
int n;
int end;

srand(time(0));
n = rand() - RAND_MAX / 2;
end = n % 10;
if (end > 5)
	printf("Last digit of %i is %d and is greater than 5\n", n, end);
else if (end == 0)
	printf("Last digit of %i is %d and is 0\n", n, end);
else if (end < 6)
	printf("Last digit of %i is %d and is less than 6 and not 0\n", n, end);
return (0);
}
