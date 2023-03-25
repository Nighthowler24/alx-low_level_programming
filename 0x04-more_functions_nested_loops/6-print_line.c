#include "main.h"

/**
 * print_line - prints a line
 * @n: parameter that counts the print
 * Return: Always 0.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
