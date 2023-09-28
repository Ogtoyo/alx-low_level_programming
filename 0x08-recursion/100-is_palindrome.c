#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: string
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen(s));
}

/**
 * if_palindrome - Help to chaeck if it is palindrome
 *@s: string
 *@x: The starting index of the string
 *@y: The ending index of the string
 *Return: 1 if palindrome, 0 if not
 */

int if_palindrome(char *s, int x, int y)
{
	if (x >= y)
		return (1);

	if (s[x] != s[y])
		return (0);

	return (if_palindrome(s, x + 1, y - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);

	return (if_palindrome(s, 0, len - 1));
}
