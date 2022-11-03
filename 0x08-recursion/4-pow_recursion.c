#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the value to multiply
 * @y: the number of times to multiply @x
 *
 * Return: -1 if y is lesser than 0,
 * otherwise integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
