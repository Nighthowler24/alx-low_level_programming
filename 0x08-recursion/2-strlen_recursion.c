#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string input
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);

}
