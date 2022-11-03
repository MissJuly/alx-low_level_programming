#include "main.h"

/**
 * factorial - Returns factorial of a given number
 * @n: the number
 *
 * Return: 1 if @n is 0,
 * or the integer value otherwise.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
