#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes out the character c
 * @c: the character to print
 *
 * Return: outputs 1 when true and 0 when false
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
