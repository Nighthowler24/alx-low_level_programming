#include "main.h"
#include <unistd.h>
/**
 * _putchar - checks for a character
 * @c: parameter
 * return: 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
