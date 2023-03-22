#include "main.h"

/**
 * _isalpha - check the code.
 * @c: parameter to be printed
 * Return: returns 1 if the condition is satisfied
 * or 0 if false
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
