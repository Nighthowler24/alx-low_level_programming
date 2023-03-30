#include "main.h"

/**
 * _strncpy - copies the string from source to dest
 * @dest: function parameter, destination file
 * @src: funtion parameter, source file
 * @n: count
 * Return: Returns dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
