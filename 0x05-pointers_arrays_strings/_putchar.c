#include  <unistd.h>

/**
 * main - Runs -putchar function
 * Return: 0
*/

int _putchar(char c)
{
    return write(1, &c, 1);
}
