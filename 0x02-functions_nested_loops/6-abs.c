#include "main.h"
#include <stdio.h>

/**
 * _abs - check the code
 * @c: checking parameter
 * Return: Always 0.
 *
 */
int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return c;
}
