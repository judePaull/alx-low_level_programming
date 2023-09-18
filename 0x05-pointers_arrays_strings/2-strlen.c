#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s : String to be measured.
 * Return: Always 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (l);

}
