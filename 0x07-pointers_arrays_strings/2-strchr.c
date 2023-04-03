#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character to check
 * Return: returns character c in string s
 * else return NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >=	'\0'; i++)
	{
		if (*(s + i) == c)
			return (&(*(s + i)));
	}
	return (0);
}
