#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by new line
 * @s: The string being printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int line = 0;

	while (s[line] != '\0')
	{
		line++;
	}

	for (line -= 1; line >= 0; line--)
		_putchar(s[line]);

	_putchar('\n');
}
