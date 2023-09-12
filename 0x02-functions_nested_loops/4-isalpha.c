#include <stdio.h>
#include "main.h"

/**
* _isalpha - Point of Entry.
* @c : inputed character to be checked.
* Return: 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
