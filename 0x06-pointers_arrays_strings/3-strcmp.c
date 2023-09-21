#include <stdio.h>
#include "main.h"

/**
 * _strcmp - ompares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int l;
	int h;

	l = 0;
	while (s1[l] != '\0' && s1[l] == s2[l])
	{
		l++;
	}
	h = s1[l] - s2[l];

	return (h);
}
