#include "main.h"

/**
 * puts2 - counts in even
 * @str: function parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
