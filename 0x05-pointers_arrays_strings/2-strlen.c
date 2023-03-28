#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the string length
 * @s: function parameter
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
