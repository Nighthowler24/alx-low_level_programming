#include "main.h"
#include <stdio.h>

/**
 *rev_string - check the code
 * @s: parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	char rev = s[0];
	int counter = 0;



	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
