#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase ten times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
