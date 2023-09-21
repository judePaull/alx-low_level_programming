#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy fixed length string, returning a pointer to the array.
 * @dest: string to be copied.
 * @src: pointer for array to be returned to.
 * @n: size of array
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	for (; d < n; d++)
	{
		dest[d] = '\0';
	}
	return (dest);

}
