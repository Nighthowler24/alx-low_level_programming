#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses the string
 * @s: function parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
