#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that returns a character
 * @c: function variable
 * Return: returns 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
