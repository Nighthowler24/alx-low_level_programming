#include "main.h"
#include <stdio.h>

/**
 * *_strncat - catenates n number of strings
 * @dest: function parameter
 * @src: function parameter
 * @n: input number
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
