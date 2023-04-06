#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string input
 * Return: returns 1 on success,
 * else return 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (palindrome(s, 0, _strlen_recursion(s)));

}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string input
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - checks the characters recursively for palindrome
 * @s: string input
 * @c: count
 * @len: string length
 * Return: 1 on success,
 * else return 0.
 */
int palindrome(char *s, int c, int len)
{
	if (s[c] != s[len - 1])
		return (0);
	else if (c >= len)
		return (1);
	else
		return (palindrome(s, c + 1, len - 1));
}

