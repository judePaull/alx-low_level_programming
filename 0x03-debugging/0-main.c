#include <stdio.h>
#include "main.h"
/**
 * main - Test function for positive or negative
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	
	printf("Testing positive_or_negative() with 0:\n");
	positive_or_negative(i);

	return (0);
}
