#include "main.h"
#include <stdio.h>

/**
 * _memset -  function that fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: number of bytes
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		*(s + i) = b;
		n--;
	}
	return (s);
}
