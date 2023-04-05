#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y
 * @x: base case
 * @y: power to which the base is raised
 *
 * Return: result of base raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

