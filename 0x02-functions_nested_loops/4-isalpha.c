#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: The character being checked
 *
 * Return: 1 for alphabet character or 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
