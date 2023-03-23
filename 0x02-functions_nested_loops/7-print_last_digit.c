#include "main.h"

/**
 * print_last_digit - check the code
 * @i: value to determine last digit
 * Return: the last digit of the value given,any number.
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -(k);
	_putchar('0' + k);
	return (k);
}

