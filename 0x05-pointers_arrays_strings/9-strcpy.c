#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src : pointer to the string to copy
 * @dest : pointer to the buffer where the string is pasted
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int cpy;
	int l;

	for (l = 0; src[l] != 0; l++)
	{
	}
	for (cpy = 0; cpy <= l; cpy++)
	{
		dest[cpy] = src[cpy];
	}
	return (dest);
}
