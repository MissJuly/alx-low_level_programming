#include "main.h"

/**
 * main - prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}

	_putchar('\n');
}
