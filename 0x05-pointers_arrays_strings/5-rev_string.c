#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0, k = 0;
	char str[500];

	while (*(s + c))
	{
		*(str + c) = *(s + c);
		c++;
	}

	c = c - 1;
	while (c >= 0)
	{
		*(s + c) = *(str + k);
		k++;
		c--;
	}
}
