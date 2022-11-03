#include "main.h"

/**
 * factorial - Returns factorial of a given number
 * @n: the number
 *
 * Return: -1 if @n is lower than 0,
 * or the integer value otherwise.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
