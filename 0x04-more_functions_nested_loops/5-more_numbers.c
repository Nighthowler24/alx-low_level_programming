#include "main.h"

/**
 * more_numbers - repeats the printing of numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b;

	for (a = 48; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}
