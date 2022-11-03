#include "main.h"
#include <stdio.h>

int _find_sqrt(int n, int l);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_find_sqrt(n, 1));
}

/**
 * _find_sqrt - Calculates natural square root
 * @n: the number to calculate the square root
 * @l: the iterate number
 *
 * Return: -1 if @n has no natural root,
 * otherwise the natural square root.
 */
int _find_sqrt(int n, int l)
{
	int sqrt = l * l;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (l);

	return (_find_sqrt(n, l + 1));
}
