#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char *i, temp;

	i = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		i++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		temp = s[a];
		s[a] = *i;
		*i = temp;
		i--;
	}
}
