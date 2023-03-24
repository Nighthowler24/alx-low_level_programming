#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code
 * @size: para
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for ((b = size - 1); b > 0; b--)
			{
				_putchar(' ');
			}
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			if (a == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
