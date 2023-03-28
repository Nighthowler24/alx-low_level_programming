#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @dest - destination of the function
 * @src - source of the function
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
