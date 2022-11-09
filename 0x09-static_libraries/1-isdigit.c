#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The digit being checked
 *
 * Return: 1 for a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
