#include "main.h"

/**
 * print_line - prints line n times
 *@n: The number of times _ is to be printed
 *
 *Return: void
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
