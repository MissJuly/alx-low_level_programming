#include "main.h"

/**
 * _abs - computes the absolute value of integer
 * @i: integer being computed
 *
 * Return: Absolute value of number or 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_num;

		abs_num = i * -1;

		return (abs_num);
	}

	return (i);
}
