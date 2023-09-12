#include <stdio.h>
#include "main.h"

/**
* main - prints the alphabet, in lowercase, followed by a new line.
* Return: 0
*/

/* print_alphabet - called to print alphabets */
void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
