#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  function copies n bytes from
 * memory area src to memory area dest
 * @dest: location of copied memory area
 * @src: location of memory area to copy
 * @n: number of bytes to copy
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = 0;

	for (i = n; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
