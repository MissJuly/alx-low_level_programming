#include "main.h"

/**
 * print_triangle - Prints a triangle,
 * using # charcater
 * @size: The size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, index;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (index = size - a; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < a; index++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
