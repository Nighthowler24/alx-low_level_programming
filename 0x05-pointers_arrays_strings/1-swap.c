#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two variables
 * @a: variable one
 * @b: variable two
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
