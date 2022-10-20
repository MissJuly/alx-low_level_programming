#include "main.h"

/**
 * print_last_digit - prints the last digit of number
 * @a: The number to being printed
 *
 * Return: value of last digit of a number
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
