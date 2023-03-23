#include "main.h"

/**
 * print_most_numbers - function that prints all numbers except 2 and 4
 *
 * Return: returns 1 if true or 0 if false
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if ((c == 50) || (c == 52))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar(10);
}
