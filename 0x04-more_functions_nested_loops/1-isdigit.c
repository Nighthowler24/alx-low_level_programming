#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks the parameter if it is a digit
 * @c: parameter to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
