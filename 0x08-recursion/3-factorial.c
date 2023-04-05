#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: number to find the factorial
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

