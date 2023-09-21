#include <stdio.h>
#include "main.h"

/**
 * _strcat - ppends the src string to the dest string
 * @dest : string to be appended.
 * @src : string to append.
 * Return : Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int l = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[l] != '\0')
	{
		dest[d] = src[l];
		d++;
		l++;
	}
	dest[d] = '\0';

	return dest;
}
