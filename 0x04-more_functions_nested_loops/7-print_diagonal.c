#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: The number of times \ is to be printed
 *
 * Return:void
 */
void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
				_putchar(' ');
			_putchar('\\');

			if (count == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
