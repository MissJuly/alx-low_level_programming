#include "main.h"

int _check_if_palindrome(char *s);

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (_check_if_palindrome(s));
}

/**
 * _check_if_palindrome - checks if a string is palindrome
 * @s: the string being checked
 *
 * Return: integer value
 */
int _check_if_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	if (*s == s[i])
	{
		s++;
		i--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - get length of string
 * @s: the string to check length
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
