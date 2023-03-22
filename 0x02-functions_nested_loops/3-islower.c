#include "main.h"

/**
 * _islower - returns 1 for a lowercase alphabet else return 0
 *
 * @c: parameter to outputted
 *
 * Return: 1 if true else false
 */

int _islower(int c)
{
	if (c <= 112 && c >= 97)
		return (1);
	else
		return (0);

}
