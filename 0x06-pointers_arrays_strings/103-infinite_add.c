#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses the array of string
 * @n: integer parameter
 * Return: zero
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}

}

/**
 * infinite_add - adds two integers together
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that stores result
 * @size_r: size of the buffer
 * Return: outputs r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int fill = 0;
	int i = 0;
	int j = 0;
	int digits = 0;
	int val1 = 0;
	int val2 = 0;
	int temp_total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || fill == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_total = val1 + val2 + fill;
		if (temp_total >= 10)
			fill = 1;
		else
			fill = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_total % 10) + '0';
		digits++;
		j--;
		i++;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
