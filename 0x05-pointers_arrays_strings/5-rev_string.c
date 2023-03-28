#include "main.h"
#include <stdio.h>

/**
 *rev_string - check the code
 * @s: parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);


	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) - *(s + len - i - 1);
		*(s + len - i - 1) - tmp;
	}
}

/**
 * _strlen - returns the length of the string
 * @a: string
 * Return:str length
 */
int _strlen(char a)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

		return (len);
}
