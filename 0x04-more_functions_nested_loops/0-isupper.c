#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the input is uppercase
 * @c: parameter to check
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
