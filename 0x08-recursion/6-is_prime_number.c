#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (real_prime(n, n - 1));
}

/**
 * real_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: count
 * Return: 1 on success, else return 0
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (real_prime(n, i - 1));
}
