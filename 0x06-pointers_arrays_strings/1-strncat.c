#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * _strcat - appends the src string to the dest string
 * @dest: array  with string to be appended.
 * @src: pointer where text is to append.
 * @n: number of bytes to be appended.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int d;

	for (l = 0; dest[l] != '\0'; l++)
		;
	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[l + d] = src[d];

	dest[l + d] = '\0';

	return (dest);
}
