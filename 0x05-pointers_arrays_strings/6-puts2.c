#include "main.h"

/**
 * puts2 - counts in even
 * @str: function parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i + 2)
		_putchar(i);
	_putchar('\n');
}
