#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: String being printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int k, l = 0;

	while (*(str + l))
		l++;
	k = l / 2;
	if (l % 2)
		k += 1;
	while (k < l)
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
