#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++){
		for (j = 'a'; j <= 'z'; j++){
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
