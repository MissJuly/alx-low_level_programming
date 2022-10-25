#include "main.h"

/**
 * _puts - prints a string, followed by new line,
 * to stdout
 * @str: The string being printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
